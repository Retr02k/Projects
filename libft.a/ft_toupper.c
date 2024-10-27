#include	"libft.h"
#include	<stdio.h>

int	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));	//Convert to uppercase
	}
return (c);	// Return unchanged if not a lowercase letter
}
/* 
int main (void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('b'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('Z'));


	return (0);
} */