#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(const char *str1, const char *str2)
{
	// Check if either input string is NULL
	if ((str1 == NULL) || (str2 == NULL))
		return (NULL);

	// Calculate the length of both strings
	size_t len1 = ft_strlen(str1);
	size_t len2 = ft_strlen(str2);

	// Allocate memory for the new concatenated string (+1 for the null terminator)
	char *joined_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (joined_str == NULL)
		return (NULL);

	// Recursively copy 'str1' and 'str2' into the allocated memory
	ft_copy_recursively(joined_str, str1, 0, len1);        // Copy str1 to joined_str
	ft_copy_recursively(joined_str + len1, str2, 0, len2); // Copy str2 after str1 in joined_str

	return (joined_str);
}
/* 
int main(void)
{
	// Test case 1: Join two normal strings
	const char *str1 = "Hello, ";
	const char *str2 = "World!";
	char *result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("Test 1 - Normal strings:\n");
		printf("Result: %s\n", result); // Expected: "Hello, World!"
		free(result);
	}
	else
		printf("Test 1 failed: Memory allocation error.\n");

	// Test case 2: Join with an empty string
	str1 = "Hello, ";
	str2 = "";
	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("\nTest 2 - Joining with an empty string:\n");
		printf("Result: %s\n", result); // Expected: "Hello, "
		free(result);
	}
	else
		printf("Test 2 failed: Memory allocation error.\n");

	// Test case 3: Join an empty string with a normal string
	str1 = "";
	str2 = "World!";
	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("\nTest 3 - Empty string joined with normal string:\n");
		printf("Result: %s\n", result); // Expected: "World!"
		free(result);
	}
	else
		printf("Test 3 failed: Memory allocation error.\n");

	// Test case 4: Both strings are empty
	str1 = "";
	str2 = "";
	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("\nTest 4 - Both strings are empty:\n");
		printf("Result: \"%s\"\n", result); // Expected: ""
		free(result);
	}
	else
		printf("Test 4 failed: Memory allocation error.\n");

	// Test case 5: One of the strings is NULL
	str1 = NULL;
	str2 = "Non-null";
	result = ft_strjoin(str1, str2);
	if (result == NULL)
	{
		printf("\nTest 5 - One string is NULL:\n");
		printf("Result: NULL as expected\n");
	}
	else
	{
		printf("Test 5 failed: Expected NULL but got: %s\n", result);
		free(result);
	}

	// Test case 6: Both strings are NULL
	str1 = NULL;
	str2 = NULL;
	result = ft_strjoin(str1, str2);
	if (result == NULL)
	{
		printf("\nTest 6 - Both strings are NULL:\n");
		printf("Result: NULL as expected\n");
	}
	else
	{
		printf("Test 6 failed: Expected NULL but got: %s\n", result);
		free(result);
	}

	return (0);
}
*/