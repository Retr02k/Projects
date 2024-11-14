#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<limits.h>


// Helper function to count the number of digits in a positive integer
int num_length(int n)
{
	int len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	int is_negative = 0;
	int len;
	char *str;

	// Handle the case where 'n' is 0
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	// Handle INT_MIN edge case
	if (n == INT_MIN)
	{
		str = malloc(12 * sizeof(char)); // INT_MIN needs 11 characters + '\0'
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12); // Copy INT_MIN as string into str
		return (str);
	}

	// Determine if 'n' is negative
	if (n < 0)
	{
		is_negative = 1;
		n = -n; // Convert n to positive to simplify digit extraction
	}

	// Calculate the length of the number's string representation
	len = num_length(n) + is_negative;

	// Allocate memory for the resulting string (+1 for NULL terminator)
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	// NULL-terminate the string
	str[len] = '\0';

	// Fill in the string from the end
	while (n != 0)
	{
		str[--len] = '0' + (n % 10); // Extract last digit
		n /= 10;
	}

	// If the number was negative, add the negative sign
	if (is_negative)
		str[0] = '-';

	return (str);
}

/* 
int main(void)
{
	int test_cases[] = {0, 123, -123, INT_MAX, INT_MIN}; // Array of test cases
	int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

	printf("Testing ft_itoa with various integers:\n");
	for (int i = 0; i < num_cases; i++)
	{
		int n = test_cases[i];
		char *result = ft_itoa(n); // Call your ft_itoa function
		if (result)
		{
			printf("ft_itoa(%d) = \"%s\"\n", n, result);
			free(result); // Free the memory allocated by ft_itoa
		}
		else
			printf("ft_itoa(%d) failed to allocate memory.\n", n);
	}

	return (0);
}
*/