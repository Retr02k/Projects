#include	"libft.h"
#include	<stdio.h>
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

		


}