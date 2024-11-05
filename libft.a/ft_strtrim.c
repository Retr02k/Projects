#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

// Helper function to check if a character is in the 'set' string
int is_in_set(char c, const char *set) {
    while (*set) {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(const char *str, const char *set)
{
    size_t start = 0;
    size_t end;

    // Edge case: If either 'str' or 'set' is NULL, return NULL
    if (str == NULL || set == NULL)
        return (NULL);

    // If 'str' is empty, return an empty string
    if (*str == '\0')
	{
        char *empty_str = (char *)malloc(1);
        if (empty_str)
            *empty_str = '\0';
        return (empty_str);
    }

    // If 'set' is empty, return a duplicate of 'str'
    if (*set == '\0')
        return (ft_strdup(str));

    end = ft_strlen(str);  // Set 'end' to the length of 'str'

    // Move 'start' forward as long as str[start] is in 'set'
    while (str[start] && is_in_set(str[start], set))
        start++;

    // Move 'end' backward as long as str[end - 1] is in 'set'
    while (end > start && is_in_set(str[end - 1], set))
        end--;

    // Calculate the length of the trimmed string and allocate memory
    size_t trimmed_len = end - start;
    char *trimmed_str = (char *)malloc((trimmed_len + 1) * sizeof(char));
    if (!trimmed_str)
        return (NULL);

    // Use the recursive function to copy characters from str to trimmed_str
    ft_copy_recursively(trimmed_str, str + start, 0, trimmed_len);

    return (trimmed_str);
}

int main(void)
{
    const char *test1 = "   Hello, World!   ";
    const char *set1 = " ";
    char *trimmed1 = ft_strtrim(test1, set1);
    printf("Original: '%s'\nTrimmed: '%s'\n", test1, trimmed1);
    free(trimmed1); // Remember to free the allocated memory

    const char *test2 = "***Hello, World!***";
    const char *set2 = "*";
    char *trimmed2 = ft_strtrim(test2, set2);
    printf("Original: '%s'\nTrimmed: '%s'\n", test2, trimmed2);
    free(trimmed2);

    const char *test3 = "NoTrimNeeded";
    const char *set3 = " ";
    char *trimmed3 = ft_strtrim(test3, set3);
    printf("Original: '%s'\nTrimmed: '%s'\n", test3, trimmed3);
    free(trimmed3);

    return (0);
}