#include	"libft.h"
#include	<stdio.h>
#include	<string.h>
#include	<stddef.h>

/*
The ft_memcmp function compares the first 'num' bytes (each interpreted as unsigned char) of the memory areas 'str1' and 'str2'.
*/


int ft_memcmp(const void *str1, const void *str2, size_t num)
{
	// If num is 0, return 0 since there is nothing to compare
	if (num == 0)
		return (0); // Two memory areas are considered equal if no bytes are compared

	// Cast the input pointers to unsigned char pointers for byte-wise comparison
	const unsigned char *s1 = (const unsigned char *)str1;
	const unsigned char *s2 = (const unsigned char *)str2;

	// Loop through each byte for comparison
	while (num--)
	{
		if (*s1 != *s2)
			// Return the difference between the first non-matching bytes
			return (*s1 - *s2);
		s1++; // Move to the next byte in str1
		s2++; // Move to the next byte in str2
	}

	// If all compared bytes are equal, return 0
	return (0); // Indicate that both memory areas are equal
}

/* 
int main(void)
{
	// Test 1: Basic comparison
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	int result = ft_memcmp(str1, str2, strlen(str1));
	printf("Test 1 - Same strings:\n");
	printf("Expected: 0, Result: %d\n\n", result);

	// Test 2: Different strings
	char str3[] = "Hello, World!";
	char str4[] = "Hello, world!"; // Note the lowercase 'w'
	result = ft_memcmp(str3, str4, strlen(str3));
	printf("Test 2 - Different strings:\n");
	printf("Expected: <0, Result: %d\n\n", result); // Expect negative value

	// Test 3: Compare different lengths
	char str5[] = "Hello";
	char str6[] = "Hello, World!";
	result = ft_memcmp(str5, str6, strlen(str5));
	printf("Test 3 - Compare different lengths:\n");
	printf("Expected: 0, Result: %d\n\n", result); // Expect 0 since first 5 chars are the same

	// Test 4: Comparing empty strings
	char str7[] = "";
	char str8[] = "";
	result = ft_memcmp(str7, str8, 0);
	printf("Test 4 - Empty strings:\n");
	printf("Expected: 0, Result: %d\n\n", result); // Expect 0 since nothing to compare

	// Test 5: Compare with NULL pointers
	char *nullStr = NULL;
	result = ft_memcmp(str1, nullStr, 5);
	printf("Test 5 - Compare with NULL:\n");
	printf("Expected: Undefined behavior, Result: %d\n\n", result); // Should be handled based on your implementation

	// Test 6: Compare with 0 length
	result = ft_memcmp(str1, str2, 0);
	printf("Test 6 - Compare with 0 length:\n");
	printf("Expected: 0, Result: %d\n\n", result); // Expect 0 since no bytes are compared

	return (0);
}
*/