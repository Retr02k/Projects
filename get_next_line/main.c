#include	"get_next_line.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<fcntl.h>
#include	<stdio.h>


int main(int argc, char **argv)
{
	char	*line;
	int	fd;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);

	printf("%s", line);
	close(fd);
	free(line);






	return (1);
}
