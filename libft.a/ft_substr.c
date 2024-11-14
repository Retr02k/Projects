#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<string.h>

// Recursive function to copy characters
void ft_copy_recursively(char *dest, const char *src, unsigned int index, size_t remaining)
{
    if ((remaining == 0) || (src[index] == '\0'))  // Base case
    {
        dest[index] = '\0'; // Set the null terminator
        return;
    }

    // Copy the characters
    dest[index] = src[index];

    // Call the function recursively for the next character 
    ft_copy_recursively(dest, src, index + 1, remaining - 1);
}

char *ft_substr(const char *str, unsigned int start, size_t len)
{
    // Check if the index 'start' is greater than the string length
    if (start > ft_strlen(str))
        return (NULL);

    // Adjust the length if it exceeds the remaining length of the string
    if (start + len > ft_strlen(str))
        len = ft_strlen(str) - start;

    // Allocate memory for the substring (+1 for the NULL-terminator)
    char *substr = malloc((len + 1) * sizeof(char));
    if (substr == NULL)
        return (NULL);

    // Call the recursive function
    ft_copy_recursively(substr, str + start, 0, len);

    return (substr); // Return the new substring
}

/* 
int main(void)
{
	// Test case 1: Normal case
	char *original = "Hello, World!";
	char *substr1 = ft_substr(original, 7, 5); // Should return "World"
	printf("Substring 1: '%s'\n", substr1); // Expected output: World
	free(substr1); // Free the allocated memory

	// Test case 2: Start index out of bounds
	char *substr2 = ft_substr(original, 20, 5); // Should return NULL
	printf("Substring 2: '%s'\n", substr2 ? substr2 : "NULL"); // Expected output: NULL
	free(substr2); // No need to free, as it is NULL

	// Test case 3: Length exceeds remaining string length
	char *substr3 = ft_substr(original, 4, 10); // Should return "o, World"
	printf("Substring 3: '%s'\n", substr3); // Expected output: o, World
	free(substr3); // Free the allocated memory

	// Test case 4: Length is zero
	char *substr4 = ft_substr(original, 0, 0); // Should return an empty string
	printf("Substring 4: '%s'\n", substr4); // Expected output: ''
	free(substr4); // Free the allocated memory

	// Test case 5: Start index at the end of the string
	char *substr5 = ft_substr(original, 13, 5); // Should return an empty string
	printf("Substring 5: '%s'\n", substr5); // Expected output: ''
	free(substr5); // Free the allocated memory

	// Test case 6: Start index is 0
	char *substr6 = ft_substr(original, 0, 5); // Should return "Hello"
	printf("Substring 6: '%s'\n", substr6); // Expected output: Hello
	free(substr6); // Free the allocated memory

	// Test case 7: Empty string
	char *substr7 = ft_substr("", 0, 5); // Should return an empty string
	printf("Substring 7: '%s'\n", substr7); // Expected output: ''
	free(substr7); // Free the allocated memory

	return (0);
}
*/