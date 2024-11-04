#include "libft.h"
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	// *s	==> pointer to the memory block that you want to set to zero
	// n	==> number of bytes to set to zero

	// Check if the pointer is NULL
	if (s == NULL)
		return; // Just return, since we are not expected to do anything

	unsigned char *p = (unsigned char *)s; // Cast the pointer to unsigned char for byte-wise operations

	// Check for the edge case where n is 0
	if (n == 0) // Corrected to use comparison
		return; // Simply return, since there are no bytes to set

	// Loop to set the specified number of bytes to zero
	while (n > 0)
	{
		*p = 0; // Set the current byte to 0
		p++;    // Move to the next byte
		n--;    // Decrement the count of bytes left to set
	}
}

/*
int main(void)
{
	char string[20] = "Hello, World!";
	printf("Before ft_bzero: %s\n", string);
	ft_bzero(string + 7, 6); // Set " World!" to zero
	printf("After ft_bzero:  %s\n", string); // Expected: "Hello, "

	return (0);
}
*/