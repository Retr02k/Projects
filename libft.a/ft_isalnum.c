#include	"libft.h"
#include	<stdio.h>

int ft_isalpha(const char *str)
{
	while (*str)
	{
		// Check if the character is not alphabetic
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0); // Return false if a non-alphabetic character is found
		str++;
	}
	return (1); // Return true if all characters are alphabetic
}

int ft_isdigit(const char *str)
{
	while (*str)
	{
		// Check if the character is not a digit
		if (*str < '0' || *str > '9')
			return (0); // Return false if a non-digit character is found
		str++;
	}
	return (1); // Return true if all characters are digits
}

int ft_isalnum(const char *str)
{
	while (*str)
	{
		// Check if the character is neither alphabetic nor a digit
		if (!(ft_isalpha(str) || ft_isdigit(str)))
			return (0); // Return false if a non-alphanumeric character is found
		str++;
	}
	return (1); // Return true if all characters are alphanumeric
}
/* 
int main()
{
	const char *test1 = "HelloWorld123"; // All alphanumeric
	const char *test2 = "Hello@World";    // Contains non-alphanumeric
	const char *test3 = "12345";          // All digits
	const char *test4 = "Hello";          // All alphabetic

	// Test ft_isalnum
	if (ft_isalnum(test1))
		printf("The string \"%s\" contains only alphanumeric characters.\n", test1);
	else
		printf("The string \"%s\" contains non-alphanumeric characters.\n", test1);

	if (ft_isalnum(test2))
		printf("The string \"%s\" contains only alphanumeric characters.\n", test2);
	else
		printf("The string \"%s\" contains non-alphanumeric characters.\n", test2);

	if (ft_isalnum(test3))
		printf("The string \"%s\" contains only alphanumeric characters.\n", test3);
	else
		printf("The string \"%s\" contains non-alphanumeric characters.\n", test3);

	if (ft_isalnum(test4))
		printf("The string \"%s\" contains only alphanumeric characters.\n", test4);
	else
		printf("The string \"%s\" contains non-alphanumeric characters.\n", test4);

	return (0);
}
 */