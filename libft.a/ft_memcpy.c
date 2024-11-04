#include	"libft.h"
#include	<stdio.h>
#include	<string.h>

/*
	*ft_memcpy - Copies `n` bytes from the memory area `src` to `dest`.
Notes:
	This function does not handle overlapping memory regions. If `src`
	and `dest` overlap, please use `ft_ft_memmove` instead.
*/

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	// dest    ==> Pointer to the destination memory area where bytes are copied to.
	// src     ==> Pointer to the source memory area where bytes are copied from.
	// n       ==> Number of bytes to copy.


	int i;
	i = 0;

	// Loop through each byte until `n` bytes have been copied
	while ((int)n > i)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}

	// Return the original pointer to `dest` for function chaining
	return (dest);
}

/* 
int main(void)
{
	// Test case 1: Copying part of a string
	char src1[] = "Hello, World!";
	char dest1[20] = {0}; // Initialize empty destination array
	ft_memcpy(dest1, src1, 5); // Copy first 5 characters from src1
	printf("Test 1 - Partial Copy:\n");
	printf("Expected: Hello\n");
	printf("Result:   %s\n\n", dest1); // Should print "Hello"

	// Test case 2: Copying the entire string
	char src2[] = "Full Copy Test";
	char dest2[20] = {0}; // Initialize empty destination array
	ft_memcpy(dest2, src2, strlen(src2) + 1); // Copy full string including null terminator
	printf("Test 2 - Full Copy:\n");
	printf("Expected: Full Copy Test\n");
	printf("Result:   %s\n\n", dest2); // Should print "Full Copy Test"

	// Test case 3: Copying zero bytes
	char src3[] = "Zero Copy Test";
	char dest3[20] = "Initial Value";
	ft_memcpy(dest3, src3, 0); // Copy 0 bytes
	printf("Test 3 - Zero Bytes:\n");
	printf("Expected: Initial Value\n");
	printf("Result:   %s\n\n", dest3); // Should remain "Initial Value"

	// Test case 4: Handling overlapping memory (should use ft_memmove for overlap)
	char src4[] = "Overlapping";
	ft_memcpy(src4 + 2, src4, 5); // Attempt to copy "Overl" into overlapping memory
	printf("Test 4 - Overlapping Copy (undefined behavior):\n");
	printf("Result:   %s\n\n", src4); // Output varies; ft_memmove recommended instead

	// Test case 5: Copying with NULL destination (edge case)
	char *dest5 = NULL;
	if (ft_memcpy(dest5, src1, 5) == NULL)
		printf("Test 5 - NULL Destination: Passed (Returned NULL as expected)\n\n");

	// Test case 6: Copying with NULL source (edge case)
	char dest6[20] = {0};
	if (ft_memcpy(dest6, NULL, 5) == NULL)
		printf("Test 6 - NULL Source: Passed (Returned NULL as expected)\n\n");

	return (0);
}
 */