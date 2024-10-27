#include	"libft.h"
#include	<stdio.h>

int	ft_isprint(int	c)
{
	return (c >= 32 && c <= 126);	// Printable characters in ASCII range
}
/* 
int main (void)
{
	printf("%d\n", ft_isprint(10));
	printf("%d\n", ft_isprint(100));
	printf("%d\n", ft_isprint(1));
	printf("%d\n", ft_isprint(0));
	printf("%d\n", ft_isprint(127));

	return (0);
} */