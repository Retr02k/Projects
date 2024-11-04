#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

/*
    The ft_memchr function scans the initial 'num' bytes of the memory area pointed to by 'ptr'
    for the first instance of 'value'. Both 'value' and the bytes of the memory area pointed to by
    'ptr' are interpreted as unsigned char. If 'value' is found, a pointer to it within 'ptr' is returned;
    otherwise, NULL is returned.
*/

void    *ft_memchr(const void *ptr, int value, size_t num)
{
    // ptr      ==> A pointer to the block of memory where the search will take place.
    // value    ==> The byte value to search for (converted to unsigned char).
    // num      ==> The number of bytes to search within the memory block.

    // Cast 'value' to unsigned char to ensure it is interpreted as a single byte
    unsigned char (byte_val) = (unsigned char)value;

    // Cast 'ptr' to unsigned char pointer for byte-wise comparison
    unsigned char (*s) = (unsigned char *)ptr;

    // Loop through each byte in the memory area until 'num' bytes are checked
    while (num > 0)
    {
        if (*s == byte_val)  // Check if the current byte matches 'byte_val'
            return (s);        // Return pointer to the matching byte

        s++;                 // Move to the next byte
        num--;               // Decrement bytes left to check
    }
    
    return (NULL);             // Return NULL if 'value' was not found in 'num' bytes
}

/* 
int main(void)
{
    // Test 1: Basic search within a string
    char str1[] = "Hello, World!";
    char *result1 = ft_memchr(str1, 'W', strlen(str1));
    printf("Test 1 - Basic search for 'W':\n");
    printf("Expected: %p, Result: %p\n", memchr(str1, 'W', strlen(str1)), result1);
    if (result1) printf("Found at position: %ld\n\n", result1 - str1);

    // Test 2: Value not found
    char *result2 = ft_memchr(str1, 'z', strlen(str1));
    printf("Test 2 - Search for 'z' (not present):\n");
    printf("Expected: NULL, Result: %p\n\n", result2);

    // Test 3: Searching for null terminator
    char *result3 = ft_memchr(str1, '\0', strlen(str1) + 1);
    printf("Test 3 - Search for '\\0' (null terminator):\n");
    printf("Expected: %p, Result: %p\n\n", memchr(str1, '\0', strlen(str1) + 1), result3);

    // Test 4: Empty memory block (num = 0)
    char *result4 = ft_memchr(str1, 'H', 0);
    printf("Test 4 - Search with num = 0:\n");
    printf("Expected: NULL, Result: %p\n\n", result4);

    // Test 5: Large search area, checking boundary cases
    char str2[] = "Boundary Test\xFF";
    char *result5 = ft_memchr(str2, 0xFF, strlen(str2) + 1);
    printf("Test 5 - Search for 0xFF:\n");
    printf("Expected: %p, Result: %p\n", memchr(str2, 0xFF, strlen(str2) + 1), result5);
    if (result5) printf("Found at position: %ld\n\n", result5 - str2);

    // Test 6: Search at beginning of memory area
    char *result6 = ft_memchr(str1, 'H', strlen(str1));
    printf("Test 6 - Search for 'H' at beginning:\n");
    printf("Expected: %p, Result: %p\n", memchr(str1, 'H', strlen(str1)), result6);
    if (result6) printf("Found at position: %ld\n\n", result6 - str1);

    return 0;
}
 */