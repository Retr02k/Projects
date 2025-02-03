#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
	size_t i = 0;
	while (s && s[i])
	{
		i++;
		if (s[i - 1] == '\n')
			break;
	}
	return (i);
}

char *ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char *ft_strdup(const char *s)
{
	if (!s)
		return (NULL);

	size_t len = ft_strlen(s);
	char *dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);

	size_t i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

char *ft_strjoin(char *s1, char *s2)
{
	size_t len1; 
	size_t len2;
	size_t i;
	size_t j;

	char *new_str;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)malloc(len1 + len2 + 1);

	if (!new_str)
		return (NULL);

	i = 0;
	j = 0;

	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new_str[i] = s2[j];
		i++;
		j++;

		if (new_str[i] == '\n')
			break;
	}
	new_str[i] = '\0';

	free(s1);
	s1 = NULL;

	return (new_str);
}

char *ft_substr(char *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i = 0;
	
	if (!s || start >= ft_strlen(s))
		return (NULL);
	
	size_t max_len = ft_strlen(s + start);
	len = (len > max_len) ? max_len : len;
	sub = (char *)malloc(len + 1);
	
	if (!sub)
		return (NULL);
	
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
