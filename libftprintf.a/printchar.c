#include	<unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}