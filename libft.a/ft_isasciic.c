#include	"libft.h"
#include	<stdio.h>

int	ft_isascii(int	c)
{
	return (c >= 0 && c <= 127);
}
/* 
int main (void)
{
	printf("%d\n", ft_isacii(65));		// Output: 1 (ASCII 'A)
	printf("%d\n", ft_isacii(1128));	// Output: 0 (Not ASCII)
	printf("%d\n", ft_isacii(-1));		// Output: 0 (Not ASCII)

	return (0);
} */