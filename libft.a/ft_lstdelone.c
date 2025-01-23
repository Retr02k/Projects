#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if ((lst == NULL) || (del == NULL))
		return;

	//Apply the delete function to the content
	del(lst->content);

	//Free the node itself
	free(lst);
}

/* 
//Main
// Custom delete function
void del_content(void *content)
{
	free(content);
}

int main()
{
	// Create a node with dynamically allocated content
	char *content = ft_strdup("Hello, World!");
	t_list *node = ft_lstnew(content);

	if (node == NULL)
	{
		printf("Node creation failed.\n");
		return 1;
	}

	// Print the content before deletion
	printf("Before deletion: %s\n", (char *)node->content);

	// Delete the node
	ft_lstdelone(node, del_content);

	// After deletion, node is freed, so no further access
	printf("Node deleted.\n");

	return 0;
}
 */