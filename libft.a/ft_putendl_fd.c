#include	"libft.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<fcntl.h>


void ft_putendl_fd(char *str, int fd)
{
	if (!str)
		return;
	write(fd, str, ft_strlen(str));
	write(fd, "\n", 1);
}

/* 
int main(void)
{
	int fd;

	// 1. Write to a new file
	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd >= 0)
	{
		ft_putendl_fd("Writing to a new file.\n", fd);
		close(fd);
	}
	else
		ft_putendl_fd("Failed to open file for writing.\n", 2);

	// 2. Append to an existing file
	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd >= 0)
	{
		ft_putendl_fd("Appending to the file.\n", fd);
		close(fd);
	}
	else
		ft_putendl_fd("Failed to open file for appending.\n", 2);

	// 3. Write to stdout
	ft_putendl_fd("This goes to stdout!\n", 1);

	// 4. Write to stderr
	ft_putendl_fd("This is an error message!\n", 2);

	// 5. Test with invalid file descriptor
	ft_putendl_fd("Testing invalid fd.\n", -1);

	return (0);
}
*/