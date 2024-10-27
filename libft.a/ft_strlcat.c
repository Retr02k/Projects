#include	"libft.h"
#include    <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = 0;
    size_t src_len = 0;

    // Calculate the length of dest
    while (dest[dest_len] && dest_len < size)
        dest_len++;

    // Calculate the length of src
    while (src[src_len])
        src_len++;

    // If size is less than or equal to dest_len, return size + src_len
    if (size <= dest_len)
        return size + src_len;

    // Append src to dest
    size_t i = 0;
    while (src[i] && (dest_len + i) < (size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    
    // Null terminate dest
    dest[dest_len + i] = '\0';

    // Return the total length of the string that was tried to create
    return dest_len + src_len;
}
/*
// Test the function
int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    size_t size = 15; // size of the destination buffer

    size_t result = ft_strlcat(dest, src, size);
    printf("Resulting string: '%s'\n", dest);
    printf("Total length that would have been created: %zu\n", result);

    return (0);
}
*/