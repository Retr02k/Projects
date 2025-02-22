#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>  // For size_t
#include <stdlib.h>  // For malloc, free, etc.

// Function prototypes for standard library functions
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(const char *str);
int		ft_isalpha(const char *str);
int		ft_isascii(int c);
int		ft_isdigit(const char *str);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *ptr, int value, size_t num);
int		ft_memcmp(const void *str1, const void *str2, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(const char *str, char delimiter);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(const char *str, const char *set);
char	*ft_substr(const char *str, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

// Structure definition for linked list nodes
typedef struct s_list
{
	void            *content; // Pointer to the data of the node
	struct s_list   *next;    // Pointer to the next node in the list
}
t_list;

// Function prototypes for linked list operations
void	ft_lstadd_back(t_list **lst, t_list *new);
void 	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list 	*ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
t_list  *ft_lstnew(void *content);
int 	ft_lstsize	(t_list *lst);



#endif
