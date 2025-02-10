#include	<unistd.h>

int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
		counter++;

	return (counter);	
}


int main (void)
{
	char	*str = "Hello World!";

	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	return (0);
}