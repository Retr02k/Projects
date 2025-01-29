#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// Check if the list or function pointer is NULL
	if ((lst == NULL) || (f == NULL))
		return (NULL);

	t_list *new_list = NULL;  // Pointer to the new list
	t_list *new_node = NULL;  // Pointer to a new node for each element

	// Iterate through the original list
	while (lst)
	{
		// Apply function 'f' to the current node's content and create a new node
		new_node = ft_lstnew(f(lst->content));
		
		// If memory allocation fails, clear the new list and return NULL
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);  // Free already created nodes
			return (NULL);
		}

		// Add the new node to the back of the new list
		ft_lstadd_back(&new_list, new_node);

		// Move to the next node in the original list
		lst = lst->next;
	}

	// Return the new transformed list
	return (new_list);
}

/* 
// Main
// Function to convert a string to uppercase (used as 'f' in ft_lstmap)
void *to_uppercase(void *content)
{
	char *str = (char *)content;
	char *new_str = ft_strdup(str); // Duplicate the string

	if (!new_str)
		return NULL;

	for (int i = 0; new_str[i]; i++)
		new_str[i] = ft_toupper(new_str[i]); // Convert each character to uppercase

	return (void *)new_str;
}

// Function to free allocated memory (used as 'del' in ft_lstmap)
void delete_content(void *content)
{
	free(content);
}

// Function to print a linked list
void print_list(t_list *lst)
{
	while (lst)
	{
		printf("Node content: %s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int main()
{
	// Step 1: Create the original linked list
	t_list *original = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("world")));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("linked")));
	ft_lstadd_back(&original, ft_lstnew(ft_strdup("list")));

	printf("Original list:\n");
	print_list(original);

	// Step 2: Use ft_lstmap to create a new modified list
	t_list *new_list = ft_lstmap(original, to_uppercase, delete_content);

	printf("\nNew list after ft_lstmap:\n");
	print_list(new_list);

	// Step 3: Free memory for both lists
	ft_lstclear(&original, delete_content);
	ft_lstclear(&new_list, delete_content);

	return 0;
}
*/