#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>

char	*ft_strmapi(const char	*str, char	(*f) (unsigned int, char))
{
	if(!str || !f) // Handle NULL inputs
		return (NULL);


	char	*result = malloc((ft_strlen(str) + 1) * sizeof(char));
	if(!result)
		return (NULL);


	// Apply the fnction 'f' to each character
	size_t i = 0;
	while(i < ft_strlen(str))
	{
		result[i] = f(i, str[i]);
		i++;
	}

	// NULL-terminate the string
	result[ft_strlen(str)] = '\0';

	return (result);
}

/* 
// Example function to apply: converts letters to uppercase and appends their index
char example_function(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z') // Convert lowercase letters to uppercase
		return (c - 'a' + 'A');
	return (c); // Leave other characters unchanged
}

int main(void)
{
	// Input string
	const char *input = "hello, world!";
	
	// Call ft_strmapi with the input string and the example function
	char *result = ft_strmapi(input, example_function);

	// Check if the result is not NULL
	if (result != NULL)
	{
		// Print the original and transformed strings
		printf("Original: %s\n", input);
		printf("Transformed: %s\n", result);
		
		// Free allocated memory
		free(result);
	}
	else
		printf("Memory allocation failed or invalid input.\n");

	return (0);
}
*/