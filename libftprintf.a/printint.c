#include <unistd.h>

int printint(int n)
{
	char c;
	int i = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		i++;
		n = -n;
	}

	if (n / 10 > 0)
		i = printint(n / 10);

	c = n % 10 + '0';
	write(1, &c, 1);

	return (i + 1);
}