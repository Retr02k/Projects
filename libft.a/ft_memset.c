#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	// ptr		==> Starting address of memory to be filled
	// value  	==> Value to be filled (an int that will be cast to unsigned char)
	// num  	==> Number of bytes to be filled starting from ptr

	// Check if the pointer is NULL
	if (ptr == NULL)  
		return (NULL);  // Return NULL if the pointer is invalid

	unsigned char *p = (unsigned char *)ptr; // Cast ptr to unsigned char pointer for byte-wise operations
	unsigned char val; // This will hold the value to be set in each byte

	// Determine the value to set, ensuring it's treated as an unsigned char
	if (value < 0)
		val = 0; // Treat negative values as 0
	 else if (value > 255)
		val = (unsigned char)(value & 0xFF); // Use only the last 8 bits of the value
	else
		val = (unsigned char)value; // Cast value to unsigned char if in valid range

	// Check for the edge case where num is 0
	if (num == 0)  // If no bytes are to be set
		return (ptr); // Simply return the original pointer

	// Fill the memory area with the specified value
	while (num > 0)
	{
		*p = val;  // Set the current byte to the determined value
		p++;       // Move to the next byte
		num--;     // Decrease the count of bytes left to set
	}

	return (ptr); // Return the original pointer to the start of the memory area
}
/* 
int main (void)
{
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

	return (0);
} */