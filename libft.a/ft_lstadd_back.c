#include	"libft.h"
#include	<stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if ((lst == NULL) || (new == NULL))
		return;

	if(*lst == NULL)
		*lst = new;		//if the list is empty, the new node becomes the first node
	else
	{
		//Transverse the list to find the last node
		t_list *current = *lst;
		while (current->next)
			current = current->next;
		//Set the last node's next pointer to the new node
		current->next = new;
	}
}

/* 
//Main
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
	// Create an empty list
	t_list *head = NULL;

	// Create nodes
	t_list *node1 = ft_lstnew("First node");
	t_list *node2 = ft_lstnew("Second node");
	t_list *node3 = ft_lstnew("Third node");

	// Add nodes to the back of the list
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	// Print the list to verify
	print_list(head);

	return 0;
}
*/