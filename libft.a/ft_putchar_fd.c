#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h> // For close() and write()
#include	<fcntl.h> // For open()

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* 
int main(void)
{
	// Test 1: Write to stdout (console)
	printf("Writing to stdout:\n");
	ft_putchar_fd('A', STDOUT_FILENO); // STDOUT_FILENO is 1
	printf("\n\n");

	// Test 2: Write to stderr (error output)
	printf("Writing to stderr:\n");
	ft_putchar_fd('B', STDERR_FILENO); // STDERR_FILENO is 2
	printf("\n\n");

	// Test 3: Write to a file
	printf("Writing to a file (output.txt):\n");
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	ft_putchar_fd('C', fd);
	close(fd);
	printf("Check the contents of 'output.txt'.\n\n");

	// Test 4: Handle invalid file descriptor
	printf("Testing with an invalid file descriptor:\n");
	ft_putchar_fd('D', -1);
	printf("\nNote: No output expected for invalid descriptor.\n");

	return (0);
}
*/