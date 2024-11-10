#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = (*lst);
	while (tmp -> next)
		tmp = tmp ->next ;
	tmp -> next = new ;
}
/* 
void	plist(t_list *ptr)
{
	while (ptr != NULL)
	{
		printf("%s  ",ptr -> content);
		ptr = ptr ->next ;
	}
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


int	main(void)
{
	t_list	*head ;
	t_list	*newnode;
	t_list	*tmp;
	t_list	*test;
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
	
	test = ft_lstnew("barcaa");
	ft_lstadd_back(&tmp,test);
	tmp = head ;
	plist(tmp);
}

*/