#include	"libft.h"
#include	<stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - ('A' - 'a'));	//Convert to lowercase
	}

return (c);	// Return unchanged if not a lowercase letter
}
/* 
int main (void)
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('Z'));
	printf("%c\n", ft_tolower('B'));
	printf("%c\n", ft_tolower('m'));

	return (0);
} */