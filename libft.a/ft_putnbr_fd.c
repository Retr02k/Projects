#include	"libft.h"
#include	<unistd.h>
#include	<fcntl.h>
#include	<stdio.h>


void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) // Handle INT_MIN edge case
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0) // Handle negative numbers
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10) // Recursive call to handle multiple digits
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd); // Convert single digit to character
}

/* 
int main(void)
{
    // Open a file to write
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }

    // Test ft_putstr_fd
    printf("Testing ft_putstr_fd:\n");
    ft_putstr_fd("Hello, world!", fd);
    ft_putstr_fd("\nTesting ft_putstr_fd complete.\n", fd);
    printf("Check 'test_output.txt' for results.\n\n");

    // Test ft_putendl_fd
    printf("Testing ft_putendl_fd:\n");
    ft_putendl_fd("This is a line with a newline.", fd);
    ft_putendl_fd("Another line.", fd);
    printf("Check 'test_output.txt' for results.\n\n");

    // Test ft_putnbr_fd
    printf("Testing ft_putnbr_fd:\n");
    ft_putnbr_fd(42, fd);
    ft_putendl_fd("", fd); // Add a newline after number
    ft_putnbr_fd(-12345, fd);
    ft_putendl_fd("", fd); // Add a newline after number
    ft_putnbr_fd(-2147483648, fd);
    ft_putendl_fd("", fd); // Add a newline after number
    printf("Check 'test_output.txt' for results.\n\n");

    // Close the file
    if (close(fd) == -1)
    {
        perror("Error closing file");
        return (1);
    }

    // Test writing to stdout
    printf("Testing writing to stdout:\n");
    ft_putstr_fd("Hello, stdout!\n", 1);
    ft_putendl_fd("This is a line with a newline on stdout.", 1);
    ft_putnbr_fd(123456789, 1);
    ft_putendl_fd("", 1); // Add a newline after number

    return (0);
}
*/