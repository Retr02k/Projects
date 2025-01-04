#include	"libft.h"
#include	<stdio.h>



void ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst == NULL) || (new == NULL))
		return;

	new->next = *lst;	// Set the new node's next pointer to the current head 
	*lst = new;			// Update the head of the list to te new node
}
/* 
// main

// Function to print the linked list
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
	// Step 1: Create the initial list
	t_list *head = ft_lstnew("Second node"); // First node of the list

	// Step 2: Create the new node to add to the front
	t_list *new_node = ft_lstnew("First node");

	// Step 3: Add the new node to the front of the list
	ft_lstadd_front(&head, new_node);

	// Step 4: Print the list to verify the order
	print_list(head);

	return 0;
}
*/