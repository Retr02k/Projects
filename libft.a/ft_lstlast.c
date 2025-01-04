#include	"libft.h"
#include	<stdio.h>

t_list *ft_lstlast(t_list *lst)
{
	// Check if the list is empty
	if (!lst)
		return (NULL);

	// Traverse the list until you reach the last node
	while (lst->next)  // Continue as long as lst->next isn't NULL
	{
		lst = lst->next;  // Move to the next node
	}

	// When lst->next is NULL, return the current node (the last one)
	return (lst);
}

// Main
/* 
void print_last_node(t_list *lst)
{
	if (lst == NULL)
		printf("The list is empty.\n");
	else
		printf("Last node content: %s\n", (char *)lst->content);
}

int main()
{
	// Create the nodes
	t_list *node1 = ft_lstnew("First node");
	t_list *node2 = ft_lstnew("Second node");
	t_list *node3 = ft_lstnew("Third node");

	// Link the nodes
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL; // The last node

	// Call ft_lstlast to get the last node
	t_list *last = ft_lstlast(node1);

	// Print the last node's content
	print_last_node(last);

	return 0;
}
*/