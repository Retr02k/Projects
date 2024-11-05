#include	"libft.h"
#include	<stdio.h>

size_t ft_strlen(const char	*str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);	
}
/* 
int main(void)
{
	char *str = "Hello World!";
	printf("String: %s\n", str);
	printf("The length of the string is: %ld\n", ft_strlen(str));
}
*/
