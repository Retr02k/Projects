#include	"libft.h"
#include    <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    // If needle is an empty string, return haystack
    if (*needle == '\0')
        return ((char *)haystack);

    // Calculate length of needle
    size_t needle_len = 0;
    while (needle[needle_len] != '\0')
        needle_len++;

    size_t i = 0; // Initialize index for haystack
    while (i < len && haystack[i] != '\0') // Loop through haystack
    {
        // Check if the first character of needle matches
        if (haystack[i] == needle[0])
        {
            size_t j = 0; // Initialize index for needle
            while (j < needle_len && (i + j) < len && haystack[i + j] == needle[j]) // Compare the rest of needle
            {
                j++;
            }
            // If we matched the entire needle, return the starting position
            if (j == needle_len)
                return ((char *)&haystack[i]);
        }
        i++; // Move to the next character in haystack
    }
    return (NULL); // No match found
}
/*
// Test the function
int main()
{
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = 10; // Limit the search to the first 10 characters

    char *result = ft_strnstr(haystack, needle, len);
    
    if (result) {
        printf("Found '%s' in '%s' at position: %ld\n", needle, haystack, result - haystack);
    } else {
        printf("'%s' not found in the first %zu characters of '%s'\n", needle, len, haystack);
    }

    return (0);
}
*/