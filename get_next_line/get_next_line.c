#include	"get_next_line.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<fcntl.h>
#include	<stdio.h>


static	void	read_to_stash(int fd, char *stash, char **line)
{
	// Keep reading until we find a newline in the stash
	while ((stash[0]) || (read(fd, stash, BUFFER_SIZE)))
	{
		// Append the newly read data to stash
		*line = ft_strjoin(*line, stash);

		if((*line)[ft_strlen(*line) - 1] == '\n')
			return;
	}

	return;
}


char	*get_next_line(int fd)
{
	static char stash[BUFFER_SIZE];
	char *line;
	int read_status;

	// Handle invalid file descriptor or buffer size
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	line = NULL;

	// Read from fd and store the result in stash
	read_to_stash(fd, stash, &line);

	// Extract the next line from stash and return it
	return (line);
}
