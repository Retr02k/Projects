#include	<unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}


char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);	
}

int	main	(void)
{
	char s1[100];
	char s2[100] = "Hello, World!";

	ft_strcpy(s1, s2);
	write(1, s1, ft_strlen(s1));
	return (0);
}