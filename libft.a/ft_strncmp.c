#include        "libft.h"
#include        <stdio.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t i = 0;

    while ((s1[i] != '\0') && (s2[i] != '\0') && i < n)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

/* 
int main(void)
{
    char c[] = "Hello World!";
    char d[] = "hello Dattebayo!";

    printf("%d\n", ft_strncmp(c, d, 5));

    return (0);
}
 */