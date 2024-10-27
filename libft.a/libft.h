#ifndef LIBFT_H
#define LIBFT_H

#include	<stddef.h>	//for size_t if neded
#include	<stdlib.h>	//for malloc, free, etc

int	ft_atoi(const char	*str);
int ft_isalpha(const char *str);
int ft_isalpha(const char *str);
int ft_isdigit(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char	*dest, char	*src,	size_t	size);
int	ft_strlen(char *str);
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);






#endif