#include <stdio.h>

int ft_isdigit(const char *str)
{
	// Use a pointer to traverse the string
	while (*str) // Continue until we reach the null terminator
	{
		// Check if the character is not a digit
		if (*str < '0' || *str > '9')
			return 0;  // Return false if a non-digit character is found

		str++; // Move to the next character
	}

	return 1;  // Return true if all characters are digits
}
/* 
int main()
{
	const char *test1 = "12345";    // Test case 1
	const char *test2 = "123a45";   // Test case 2
	const char *test3 = "";          // Test case 3 (empty string)
	const char *test4 = "45.67";     // Test case 4 (contains a decimal point)

	// Check if each test string is all digits and print the result
	if (ft_isdigit(test1))
		printf("The string \"%s\" contains only digit characters.\n", test1);
	else
		printf("The string \"%s\" contains non-digit characters.\n", test1);

	if (ft_isdigit(test2))
		printf("The string \"%s\" contains only digit characters.\n", test2);
	else
		printf("The string \"%s\" contains non-digit characters.\n", test2);
		
	if (ft_isdigit(test3))
		printf("The string \"%s\" contains only digit characters.\n", test3);
	else
		printf("The string \"%s\" contains non-digit characters.\n", test3);

	if (ft_isdigit(test4))
		printf("The string \"%s\" contains only digit characters.\n", test4);
	else
		printf("The string \"%s\" contains non-digit characters.\n", test4);

	return 0;
}
 */