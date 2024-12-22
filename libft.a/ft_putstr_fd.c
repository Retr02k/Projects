#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>
#include	<fcntl.h>


void ft_putstr_fd(char *str, int fd)
{
	if (!str)	//Handle NULL string
		return;
	write(fd, str, ft_strlen(str));

}


/* 
int main(void)
{
	int fd;

	// 1. Write to a new file
	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd >= 0)
	{
		ft_putstr_fd("Writing to a new file.\n", fd);
		close(fd);
	}
	else
		ft_putstr_fd("Failed to open file for writing.\n", 2);

	// 2. Append to an existing file
	fd = open("test_output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd >= 0)
	{
		ft_putstr_fd("Appending to the file.\n", fd);
		close(fd);
	}
	else
		ft_putstr_fd("Failed to open file for appending.\n", 2);

	// 3. Write to stdout
	ft_putstr_fd("This goes to stdout!\n", 1);

	// 4. Write to stderr
	ft_putstr_fd("This is an error message!\n", 2);

	// 5. Test with invalid file descriptor
	ft_putstr_fd("Testing invalid fd.\n", -1);

	return (0);
}
*/