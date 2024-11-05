#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<stdint.h>

void *ft_memset(void *s, int c, size_t n) {
	unsigned char *p = s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}

void *ft_calloc(size_t count, size_t size) {
	// If count or size is 0, malloc(0) may return NULL or a unique pointer
	if (count == 0 || size == 0)
		return (malloc(0)); // Allocates zero bytes

	// Calculate total memory needed
	size_t total_size = (count * size);

	// Check for overflow (before the multiplication)
	if (size != 0 && total_size / size != count)
		return (NULL); // Overflow occurred

	// Allocate memory with malloc
	void *ptr = malloc(total_size);
	
	// Check if allocation succeeded
	if (ptr == NULL)
		return (NULL);

	// Initialize memory to zero
	ft_memset(ptr, 0, total_size);

	// Return the pointer to the allocated memory
	return (ptr);
}
/* 
int main(void) {
	// Test 1: Allocate memory for 5 integers
	int *arr1 = (int *)ft_calloc(5, sizeof(int));
	if (arr1 != NULL)
	{
		printf("Test 1 - Allocated 5 integers:\n");
		size_t i = 0;
		while (i < 5)
		{
			printf("arr1[%zu] = %d\n", i, arr1[i]); // Should all be 0
			i++;
		}
		free(arr1);
	}
	else
		printf("Test 1 - Memory allocation failed.\n");

	// Test 2: Allocate memory for 0 elements
	int *arr2 = (int *)ft_calloc(0, sizeof(int));
	if (arr2 == NULL)
		printf("Test 2 - Correctly returned NULL for 0 allocation.\n");
	else
	{
		printf("Test 2 - Unexpected behavior, should have returned NULL.\n");
		free(arr2);
	}

	// Test 3: Allocate memory for a very large number of elements
	size_t count = (size_t)-1; // Use the maximum size_t value
	int *arr3 = (int *)ft_calloc(count, sizeof(int));
	if (arr3 == NULL)
		printf("Test 3 - Correctly returned NULL for large allocation.\n");
	else
	{
		printf("Test 3 - Unexpected behavior, should have returned NULL.\n");
		free(arr3);
	}

	// Test 4: Allocate memory for 3 chars
	char *arr4 = (char *)ft_calloc(3, sizeof(char));
	if (arr4 != NULL)
	{
		printf("Test 4 - Allocated 3 chars:\n");
		size_t j = 0;
		while (j < 3)
		{
			printf("arr4[%zu] = '%c'\n", j, arr4[j]); // Should all be '\0'
			j++;
		}
		free(arr4);
	}
	else
		printf("Test 4 - Memory allocation failed.\n");

	// Test 5: Allocate memory for 1 char, size 0
	char *arr5 = (char *)ft_calloc(1, 0);
	if (arr5 != NULL)
	{
		printf("Test 5 - Allocated 1 char with size 0 (should be NULL or allocated)\n");
		free(arr5);
	}
	else
		printf("Test 5 - Correctly returned NULL for size 0.\n");

	return (0);
}
 */