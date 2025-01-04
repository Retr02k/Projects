#include	"libft.h"
#include	<stdio.h>

int ft_lstsize	(t_list *lst)
{
	int counter = 0;

	while (lst != NULL)
	{
		counter++;			// Increment the counter
		lst = lst->next;	// Move to the next node
	}
	
	return (counter);		// Return the total number of nodes
}

/*
int main()
{
	// Step 1: Create nodes
	t_list *node1 = ft_lstnew("First node");
	t_list *node2 = ft_lstnew("Second node");
	t_list *node3 = ft_lstnew("Third node");

	// Step 2: Link the nodes to form a list
	node1->next = node2;
	node2->next = node3;

	// Step 3: Get the size of the list
	int size = ft_lstsize(node1);

	// Step 4: Print the result
	printf("The size of the list is: %d\n", size);

	return 0;
}
*/