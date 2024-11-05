#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>


char	*ft_strjoin(const char	*str1, const char	*str2)
{
	// If either of the input string are 'NULL', return 'NULL'
	if((str1 = NULL) || (str2 = NULL))
		return (NULL);


	// Calculate the length of the strings using 'ft_strlen'
	ft_strlen(str1);
	ft_strlen(str2);

	// Allocate memory for the new string
	char len = ft_strlen(str1) + ft_strlen(str2);
	char *newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return(NULL);


}