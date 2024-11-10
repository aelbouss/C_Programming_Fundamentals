#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((*lst) == NULL)
		(*lst) = new;
	else
	{
		new -> next = (*lst);
		(*lst) = new;
	}
}

/* 
t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}

void	printlst(t_list	**lst)
{
	while ((*lst) != NULL)
	{
		printf("%s ",(char *)(*lst)->content);
		(*lst) = (*lst) -> next;
	}
}

int	main(void)
{
	t_list *head;
	t_list	*exist;
	t_list	*other;
	head = NULL;

	exist = ft_lstnew("anass");
	other = ft_lstnew("ayoub");
	ft_lstadd_front(&head, exist) ;
	ft_lstadd_front(&head,other) ;
	printlst(&head);

}
*/