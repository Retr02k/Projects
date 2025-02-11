#include	<unistd.h>

int	letter_count(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	return (i);
}


int	main	(int	argc,	char	**argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (letter_count(argv[1][i]) != 0)
			{
				int j = 0;
				while (j < letter_count(argv[1][i]))
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
}