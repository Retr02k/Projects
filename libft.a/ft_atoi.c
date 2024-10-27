#include	"libft.h"
#include	<stdio.h>

int	ft_atoi(const char	*str)
{
	int result	=	0;
	int	sign	=	1;
	
	while (((*str >= 9) && (*str <= 13)) || (*str == 32))
		str++;

	if ((*str == 43) || (*str == 45))
	{
		if(*str == 45)
			sign = -1;

		str++;
	}

	while ((*str >= '0') && (*str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (result * sign);
}
/* 
int main(void)
{
	const char *str1 = "   1234";
    const char *str2 = "  -5678";
    const char *str3 = "42abc";
    const char *str4 = "hello";

	printf("'%s' -> %d\n", str1, ft_atoi(str1));
	printf("'%s' -> %d\n", str2, ft_atoi(str2));
	printf("'%s' -> %d\n", str3, ft_atoi(str3));
	printf("'%s' -> %d\n", str4, ft_atoi(str4));

	return (0);
} */