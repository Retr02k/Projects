#include <stdio.h>

int	ft_strlen(char *str)
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
	printf("The length of the string is: %d\n", ft_strlen(str));
}
*/