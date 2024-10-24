#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char	*dest, char	*src,	unsigned int	size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = 0;
	i = 0;
	while(src[src_len])
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int main (void)
{
	char	src[] = "Hello World!";
	char	dest[20];

	unsigned int	len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied string: %s\n", dest);
	printf("Length of sorce string: %u\n", len);
}
*/