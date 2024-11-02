#include	"libft.h"
#include	<stdio.h>
#include	<string.h>


/* 
	The memmove() function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first
	copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.
*/

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	// dest		==> The destination pointer where data is copied to
	// src		==> The source pointer where data is copied from
	// n		==> The number of bytes to copy

	// Check if the input pointer are NULL
	if (dest == NULL || src == NULL)
		return(NULL); // If either 'dest' or 'src' is NULL, return NULL
	
	
	// Convert void pointers to unsigned char pointers for byte-wise operations
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	
	
	// Check if there's overlap and determine copy directions
	if (d == s || n == 0)
		return (dest);	// If soource and destination are the same, or zero bytes to move, do nothing
	
	
	
	else if (d < s)
	{
		// Forward copy: No risk of overwriting because 'dest'  starts before 'src'
		while(n--)
			*d++ = *s++; // Copy byte from 'src' to 'dest', then increment pointers
	}

	
	else
	{
		// Backwards copy: Start from the end to avoid overwriting
		d += n;
		s += n;

		while(n--)
			*--d = *--s; // Copy from the last byte backwards
	}

	return (dest); // Return the original destination pointer
}
/* 
int main (void)
{
	 // Test 1: Basic non-overlapping copy
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("Test 1 - Non-overlapping copy:\n");
    printf("Expected: %s\n", src1);
    printf("Result:   %s\n\n", dest1);

    // Test 2: Overlapping regions, src before dest
    char overlap_src1[] = "Overlap Test";
    ft_memmove(overlap_src1 + 3, overlap_src1, strlen(overlap_src1) + 1);
    printf("Test 2 - Overlapping src before dest:\n");
    printf("Expected: OveOverlap Test\n");
    printf("Result:   %s\n\n", overlap_src1);

    // Test 3: Overlapping regions, dest before src
    char overlap_src2[] = "Overlap Test";
    ft_memmove(overlap_src2, overlap_src2 + 3, strlen(overlap_src2) - 3 + 1);
    printf("Test 3 - Overlapping dest before src:\n");
    printf("Expected: lap Test\n");
    printf("Result:   %s\n\n", overlap_src2);

    // Test 4: Copying zero bytes (should leave dest unchanged)
    char src2[] = "Another Test";
    char dest2[20] = "Unchanged";
    ft_memmove(dest2, src2, 0);
    printf("Test 4 - Zero bytes copy:\n");
    printf("Expected: Unchanged\n");
    printf("Result:   %s\n\n", dest2);

    // Test 5: Exact buffer size copy
    char src3[] = "Exact size";
    char dest3[11];
    ft_memmove(dest3, src3, strlen(src3) + 1);
    printf("Test 5 - Exact buffer size copy:\n");
    printf("Expected: %s\n", src3);
    printf("Result:   %s\n\n", dest3);

    return (0);
}
*/