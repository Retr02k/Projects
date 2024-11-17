#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>


void ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	if(!str || !f) // Handle NULL inputs
		return;

	size_t i = 0;
	while(str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
/*
void example_function(unsigned int index, char *c)
{
	(void)index;
	if (*c >= 'a' && *c <= 'z') // Convert lowercase to uppercase
		*c -= 32; // ASCII value difference between lowercase and uppercase
}

int main(void)
{
	char str[] = "hello, world!";

	printf("Original: %s\n", str);

	// Apply ft_striteri with example_function
	ft_striteri(str, example_function);

	printf("Modified: %s\n", str);

	return (0);
}
*/