#include	"libft.h"
#include	<stdio.h>

int ft_isalpha(const char *str)
{
    // Loop through the string until we reach the null terminator
    while (*str)
    {
        // Check if the current character is not alphabetic
        if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
        {
            // If it's not alphabetic, return 0 (false)
            return (0);
        }
        str++; // Move to the next character in the string
    }

    // If all characters are alphabetic, return 1 (true)
    return (1);
}
/* 
int main()
{
	const char *str1 = "HelloWorld";
	const char *str2 = "Hello123";

	// Check if str1 is all alphabetic
	if (ft_isalpha(str1))
		printf("The string \"%s\" contains only alphabetic characters.\n", str1);
	else
		printf("The string \"%s\" contains non-alphabetic characters.\n", str1);

	// Check if str2 is all alphabetic
	if (ft_isalpha(str2))
		printf("The string \"%s\" contains only alphabetic characters.\n", str2);
	else
		printf("The string \"%s\" contains non-alphabetic characters.\n", str2);

	return (0);
}
 */