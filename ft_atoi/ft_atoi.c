#include <stdio.h>

int	is_whitespaces(char *str)
{
	int i = 0;
	int sign = 1;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	while ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int signal = (is_whitespaces(str));
	int result = 0;
	int i = 0;
	while ((str[i]) && (str[i] >= 48) && (str[i] <= 57))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= signal;
	return (result);
}

int main(void)
{
	char str[] = "   ---+--+01234506789ab567";
	printf("%d\n", ft_atoi(str));
}