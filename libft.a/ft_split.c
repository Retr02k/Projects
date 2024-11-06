#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>

// Helper to check substring count
int count_substr(const char *str, char delimiter) {
	int count = 0;
	int in_substr = 0;

	while (*str)
	{
		if (*str != delimiter && !in_substr)
		{
			in_substr = 1;
			count++;
		}
		else if (*str == delimiter)
			in_substr = 0;
		str++;
	}
	return (count);
}

// Function to split string by delimiter
char **ft_split(const char *str, char delimiter)
{
	if (!str)  // Handle NULL input
		return (NULL);

	// Step 1: Count substrings
	int substr_count = count_substr(str, delimiter);

	// Step 2: Allocate array of char * (substr_count + 1 for NULL)
	char **result = malloc((substr_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);

	// Step 3: Extract each substring
	int i = 0;
	while (*str)
	{
		// Skip delimiters
		while (*str == delimiter)
			str++;

		// If we're at a non-delimiter character, extract the substring
		if (*str)
		{
			// Find substring length
			size_t substr_len = 0;
			while (str[substr_len] && str[substr_len] != delimiter)
				substr_len++;

			// Allocate memory for the substring
			result[i] = malloc((substr_len + 1) * sizeof(char));
			if (!result[i])
			{
				// Free any previously allocated memory if malloc fails
				while (i > 0)
					free(result[--i]);
				free(result);
				return (NULL);
			}

			// Copy the substring using your recursive copy function
			ft_copy_recursively(result[i], str, 0, substr_len);
			i++;

			// Move str to the end of this substring
			str += substr_len;
		}
	}

	// Step 4: Null-terminate the result array
	result[i] = NULL;
	return (result);
}
/* 
int main(void)
{
	char **result = ft_split("Hello World This Is Split", ' ');

	if (result)
	{
		for (int i = 0; result[i] != NULL; i++)
		{
			printf("result[%d]: %s\n", i, result[i]);
			free(result[i]);  // Free each substring
		}
		free(result);  // Free the array of char *
	}

	return (0);
} */