#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;

	list = lst;
	while (list)
	{
		(*f)(list->content);
		list = list->next;
	}
}
