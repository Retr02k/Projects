#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;	// Pointer to the current node
	t_list	*next_node;	// Pointer to the next node


	if ((lst == NULL) || (del == NULL))	// Check for invalid outputs
		return;


	current = *lst;	// Stat at the first node
	while (current)	// Transverse the list 
	{
		next_node = current->next;	// Save te pointer to the next node
		del(current->content);		// Delete the content using the delete function
		free(current);				// Free the current node
		current = next_node;		// Move to the next node
	}

	*lst = NULL;	// Set the original list pointer to NULL
}

/* 
// Main
void del(void *content)
{
	free(content); // Free the memory allocated for the content
}

// Function to print the list
void print_list(t_list *head)
{
	t_list *current = head;
	while (current)
	{
		printf("Node content: %s\n", (char *)current->content);
		current = current->next;
	}
}

int main()
{
	// Step 1: Create nodes with dynamically allocated content
	t_list *node1 = ft_lstnew(ft_strdup("Node 1")); // strdup allocates memory for content
	t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list *node3 = ft_lstnew(ft_strdup("Node 3"));

	// Step 2: Link the nodes
	node1->next = node2;
	node2->next = node3;

	// Step 3: Print the list before clearing
	printf("List before clearing:\n");
	print_list(node1);

	// Step 4: Clear the list
	ft_lstclear(&node1, del);

	// Step 5: Check if the list is cleared
	if (node1 == NULL)
		printf("List cleared successfully! node1 is now NULL.\n");
	else
		printf("List clearing failed! node1 is not NULL.\n");

	return (0);
}
*/