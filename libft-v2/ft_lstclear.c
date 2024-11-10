#include  "libft.h"

void	freenode(void *lst)
{
	free(((t_list *)lst) -> content);
}
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev;
	t_list	*tmp;

	tmp = (*lst);
	prev = (*lst);

	while (tmp != NULL)
	{
		tmp = tmp -> next;
		del(prev);
		free(prev);
		prev = tmp;
	}
	(*lst) = NULL; 
}

int	main(void)
{
	t_list	*head ;
	t_list	*newnode;
	t_list	*tmp;
	int	i;

	i = 0;
	head  = NULL;
	while (i < 4)
	{
		newnode = (t_list *)malloc(sizeof(t_list));
		if (newnode == NULL)
		{
			printf("error\n");
			return (-1);
		}
		
		newnode ->content = ft_strdup("anass");
		if (head == NULL)
		{
			head = newnode;
			tmp  = newnode;
		}
		else
		{
			tmp -> next = newnode;
			tmp = newnode;
		}
		i++;
	}
	tmp = head;
	ft_lstclear(&tmp,&freenode);
}