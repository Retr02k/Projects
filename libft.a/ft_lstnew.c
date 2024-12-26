#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>


t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node) // Check for allocation failure
		return (NULL);
	
	new_node->content = content;
	new_node->next = NULL;

	return (new_node);
}

/* 
int main(void)
{
	// Test with a string as content
	char *str = "Hello, linked list!";
	t_list *node1 = ft_lstnew((void *)str);
	if (node1)
		printf("Node 1 content (string): %s\n", (char *)node1->content);
	else
		printf("Failed to create node 1.\n");

	// Test with an integer as content
	int number = 42;
	t_list *node2 = ft_lstnew((void *)&number);
	if (node2)
		printf("Node 2 content (integer): %d\n", *(int *)node2->content);
	else
		printf("Failed to create node 2.\n");

	// Test with NULL content
	t_list *node3 = ft_lstnew(NULL);
	if (node3)
	{
		if (node3->content == NULL)
			printf("Node 3 content: NULL\n");
		else
			printf("Node 3 content is not NULL.\n");
	}
	else
		printf("Failed to create node 3.\n");

	// Free allocated memory
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/