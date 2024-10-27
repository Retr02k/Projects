#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcpy(char	*dest, char	*src,	size_t	size)
{
	size_t	src_len = 0;
	size_t	i = 0;
	// Calculate the length of the string
	while(src[src_len])
	{
		src_len++;
	}
	//	Copy up to 'size-1' characters from src to dest
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		//	Null-terminate the dest string
		dest[i] = '\0';
	}
	//	Return the length of the source string
	return (src_len);
}
/* 
int main (void)
{
	char	src[] = "Hello World!";
	char	dest[20];
	// Call ft_strlcpy and store the result in 'len'
	size_t	len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied string: %s\n", dest);
	printf("Length of sorce string: %lu\n", len);

	return (0);
}
 */