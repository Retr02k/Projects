#ifndef LIBFT_H
#define LIBFT_H

#include	<stddef.h>	//for size_t if neded
#include	<stdlib.h>	//for malloc, free, etc

int	ft_atoi(const char	*str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int ft_isalnum(const char *str);
int ft_isalpha(const char *str);
int	ft_isacii(int	c);
int ft_isdigit(const char *str);
int	ft_isprint(int	c);
char *ft_itoa(int n);
void    *ft_memchr(const void *ptr, int value, size_t num);
int	ft_memcmp(const void *str1, const void *str2, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void	*dest, const void	*src, size_t	n);
void	*ft_memset(void *ptr, int value, size_t num);
char **ft_split(const char *str, char delimiter);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *str);
void ft_striteri(char *str, void (*f)(unsigned int, char*));
char *ft_strjoin(const char *str1, const char *str2);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char	*dest, char	*src,	size_t	size);
size_t ft_strlen(const char	*str);
char	*ft_strmapi(const char	*str, char	(*f) (unsigned int, char));
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(const char *str, const char *set);
char *ft_substr(const char *str, unsigned int start, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int	c);











#endif