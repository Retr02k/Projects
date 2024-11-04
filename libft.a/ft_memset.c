#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *ft_memset(void *ptr, int value, size_t num) {
	unsigned char *p = (unsigned char *)ptr;
	unsigned char val = (unsigned char)value;

	if (num == 0) // If no bytes are to be set
		return ptr; // Simply return the original pointer

	while (num--)
		(*p++ = val); // Set the current byte to the determined value and move to the next byte

	return (ptr); // Return the original pointer to the start of the memory area
}
/* 
int main(void) {
	// Test case 1: Regular usage
	char string1[20] = "Hello, World!";
	printf("Before memset: %s\n", string1);
	ft_memset(string1, '*', 5); // Set first 5 bytes to '*'
	printf("After memset:  %s\n", string1); // Expected: "***** World!"

	// Test case 2: Setting to zero
	char string2[20] = "Sample Text";
	printf("\nBefore memset: %s\n", string2);
	ft_memset(string2, 0, 6); // Set first 6 bytes to '\0'
	printf("After memset:  %s\n", string2); // Expected: "" (empty string)

	// Test case 3: Setting with a value > 255
	char string3[20] = "Another Test";
	printf("\nBefore memset: %s\n", string3);
	ft_memset(string3, 300, 5); // Set first 5 bytes, 300 should wrap to 44 ('*')
	printf("After memset:  %s\n", string3); // Expected: "*****other Test"

	// Test case 4: Negative value
	char string4[20] = "Negative Value";
	printf("\nBefore memset: %s\n", string4);
	ft_memset(string4, -10, 5); // Set first 5 bytes to 0
	printf("After memset:  %s\n", string4); // Expected: "*****tive Value"

	// Test case 5: Pointer is NULL
	char *string5 = NULL;
	if (ft_memset(string5, '*', 5) == NULL)
		printf("\nNULL pointer test passed, returned NULL as expected.\n");

	// Test case 6: Zero bytes to set
	char string6[20] = "Test String";
	printf("\nBefore memset: %s\n", string6);
	ft_memset(string6, '#', 0); // No bytes should be set
	printf("After memset:  %s\n", string6); // Expected: "Test String" (unchanged)

	// Test case 7: Setting beyond the bounds
	char string7[20] = "Boundary Test";
	printf("\nBefore memset: %s\n", string7);
	ft_memset(string7, 'X', 25); // Attempt to set more bytes than the string length
	printf("After memset:  %s\n", string7); // Expected: "XXXXXXXXXXXXXXXXXXXXX" (might overflow if not handled properly)

	return (0);
}
 */