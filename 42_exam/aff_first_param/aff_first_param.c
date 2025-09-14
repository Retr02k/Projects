#include	<unistd.h>

<<<<<<< HEAD
int		main(int argc, char **argv)
{
if (argc > 1)
	{
	write(1, argv[1], 1);
=======
int	main	(int	argc,	char	**argv)
{

	if (argc > 1)
	{
		while (*argv[1])
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
>>>>>>> 3668e4153763f7c7e71ba1eabdc07e1f5da83770
	}
	write(1, "\n", 1);
	return (0);
}