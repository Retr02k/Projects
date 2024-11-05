#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

/*
The strdup() function returns a pointer to a new string which is a duplicate of the string 's'.
Memory for the new string is obtained with 'malloc', and can be freed with 'free'.
*/

char *ft_strdup(const char *str)
{
	// Allocate memory for 'length + 1' (to include the null terminator)
	char *dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dup == NULL)                // Check if memory allocation succeeded
		return (NULL);

	// Copy characters from 'str' to 'dup'
	char *temp = dup;               // Temporary pointer to keep track of the start of 'dup'
	while (*str)
	{
		*temp = *str;               // Copy each character from 'str' to 'temp'
		str++;
		temp++;
	}

	*temp = '\0';					// Add the null terminator to the end of 'dup'
	return (dup);					// Return the pointer to the start of the duplicated string
}
/* 
int main(void)
{
    char original[] = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);					// Exit if memory allocation fails
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    free(duplicate);				// Free the memory allocated by ft_strdup

    return (0);
}
 */