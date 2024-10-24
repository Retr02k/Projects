#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	while(*s1 && *s2){
		if(*s1 != *s2)
			return(*s1 - *s2);
	s1++;
	s2++;
	}
	return(*s1 - *s2);
}
/*
int main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "world";

	printf("Comparison of str1 and str2: %d\n", ft_strcmp(s1, s2));
    printf("Comparison of str1 and str3: %d\n", ft_strcmp(s1, s3));
    printf("Comparison of str3 and str1: %d\n", ft_strcmp(s3, s1));
}
*/