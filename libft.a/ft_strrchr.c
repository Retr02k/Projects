#include	"libft.h"
#include    <stdio.h>

char *ft_strrchr(const char *str, int c)
{
	const char *last_occurrence = NULL; // Pointer to store the last occurrence

	// Loop through the string until the null terminator is reached
	while (*str)
	{
		// Check if the current character matches the target character
		if (*str == (char)c)
			last_occurrence = str; // Update the last occurrence pointer
		str++; // Move to the next character
	}

	// Check for the null terminator
	if (*str == (char)c)
		return ((char *)str); // Return pointer to the null terminator if it's the match

	// Return the pointer to the last occurrence if found, or NULL if not found
	return ((char *)last_occurrence);
}

/* 
int main(void)
{
	const char *String = "Hello, World! Hello!";
	char target = 'o';

	// Call ft_strrchr to find the last occurrence of 'o'
	char *result = ft_strrchr(String, target);

	// Check if the character was found
	if (result != NULL)
	{
		printf("Character '%c' found at position: %ld\n", target, result - String);
		printf("Substring from found character: %s\n", result); // Print substring starting from the found character
	}
	
	else
	{
		printf("Character '%c' not found in the string.\n", target);
	}

	return (0);
} */