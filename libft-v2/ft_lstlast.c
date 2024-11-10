#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

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
/*
int	main(void)
{
	t_list	*head ;
	t_list	*newnode;
	t_list	*tmp;
	char  str[6];
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
		printf("enter  the string number [%d] : ",i+1);
		scanf("%s",str);
		newnode ->content = str;
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
	tmp = head ;
	tmp = ft_lstlast(head);
	printf("%s",tmp ->content);
}
*/