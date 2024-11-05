#include	"libft.h"
#include	<stdlib.h>


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