#include	"get_next_line.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<fcntl.h>
#include	<stdio.h>


int main(int argc, char **argv)
{
	int fd;
	char *line;

	// Check if a filename is provided
	if (argc != 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		return (1);
	}

	// Open the file for reading
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}

	// Read and print each line using get_next_line
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}

	// Close the file
	close(fd);
	return (0);
}
