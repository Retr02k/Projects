#include	"get_next_line.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<fcntl.h>
#include	<stdio.h>

static char	*get_line(char **stash)
{
	char	*line;
	char	*new_stash;
	size_t	i = 0;

	// If stash is empty, return NULL
	if (!(*stash) || !(*stash)[0])
		return (NULL);
	
	// Find the length of the line (until newline or end of stash)
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	if ((*stash)[i] == '\n')
		i++;  // Include the newline in the extracted line

	// Extract the line from stash (includes '\n' if present)
	line = ft_substr(*stash, 0, i);

	// Create a new stash without the extracted line
	new_stash = ft_strdup(*stash + i);

	// Free the old stash and update it with the new remaining data
	free(*stash);
	*stash = new_stash;

	return (line);
}


static int	read_to_stash(int fd, char **stash)
{
	char	buffer[BUFFER_SIZE + 1];  // Temporary buffer for reading
	char	*temp;	// Necessary to prevent a memory leak
	size_t	bytes;

	// Keep reading until we find a newline in the stash
	while (!ft_strchr(*stash, '\n'))
	{
		// Read up to BUFFER_SIZE bytes from the file
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)  // If read fails or EOF is reached, return
			return (bytes);

		buffer[bytes] = '\0';  // Null-terminate the buffer
		// Append the newly read data to stash
		temp = ft_strjoin(*stash, buffer);
		free(*stash);  // Free old stash memory to avoid leaks
		*stash = temp; // Update stash with new data
	}

	return (1);
}


char	*get_next_line(int fd)
{
	static char *stash;  // Static stash to hold leftover data across calls
	int read_status;

	// Handle invalid file descriptor or buffer size
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	// Initialize stash if it's the first call
	if (!stash)
		stash = ft_strdup("");
	
	// Read from fd and store the result in stash
	read_status = read_to_stash(fd, &stash);
	
	// If read failed or we reached EOF and stash is empty, clean up
	if (read_status == -1 || (read_status == 0 && !*stash))
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	
	// Extract the next line from stash and return it
	return (get_line(&stash));
}
