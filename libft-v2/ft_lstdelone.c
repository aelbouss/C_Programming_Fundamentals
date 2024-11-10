#include "libft.h"


/*void	freenode(void *lst)
{
	free(lst);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst ->content);
		free(lst);
	}
}

/*
t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode -> content = ft_strdup((char *)content);
	newnode -> next = NULL;
	return (newnode);
}

int	main(void)
{
	t_list	*head ;

	head = NULL;
	head = ft_lstnew("anass");
	void (*hind)(void *);
	hind = freenode;
	printf("%s",(char *)head -> content);
	ft_lstdelone(head,hind);	
}
*/