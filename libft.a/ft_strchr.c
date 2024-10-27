#include	"libft.h"
#include	<stdio.h>

char *ft_strchr(const char *str, int c)
{
    // Loop through the string until the null terminator is reached
    while (*str)
    {
        // Check if the current character matches the target character
        if (*str == (char)c)
            return ((char *)str); // Return the pointer to the matching character
        str++; // Move to the next character
    }

    // Check for the null terminator
    if (*str == (char)c)
    {
        return ((char *)str); // Return pointer to the null terminator if it's the match
    }

    // If character was not found, return NULL
    return (NULL);
}
/* 
int main(void)
{
    const char *string = "Hello World!";
    char target = 'o';

    // Call ft_strchr to find the first occurrence of 'o'
    char *result = ft_strchr(string, target);

    // Check if the character was found
    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", target, result - string);
        printf("Substring from found character: %s\n", result);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", target);
    }

    return (0);
}
 */