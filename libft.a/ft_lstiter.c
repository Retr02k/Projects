#include	"libft.h"
#include	<stdio.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if ((lst == NULL) || (f == NULL)) // Ensure inputs are valid
		return;

	t_list *current = lst; // Start at the first node

	while (current) // Traverse the list
	{
		f(current->content);		// Apply the function to the content of the current node
		current = current->next;	// Move to the next node
	}
}


// Main
// Function to apply to each node's content
void to_uppercase(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str); // Use your ft_toupper function here
        str++;
    }
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
    // Step 1: Create nodes with dynamically allocated content using ft_strdup
    t_list *node1 = ft_lstnew(ft_strdup("hello"));
    t_list *node2 = ft_lstnew(ft_strdup("world"));
    t_list *node3 = ft_lstnew(ft_strdup("libft"));

    // Step 2: Link the nodes
    node1->next = node2;
    node2->next = node3;

    // Step 3: Print the list before applying the function
    printf("Before ft_lstiter:\n");
    print_list(node1);

    // Step 4: Apply ft_lstiter with the to_uppercase function
    ft_lstiter(node1, to_uppercase);

    // Step 5: Print the list after applying the function
    printf("\nAfter ft_lstiter:\n");
    print_list(node1);

    return 0;
}
