#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*list;

	if (*lst)
	{
		list = ft_lstnew(new);
		list->next = *lst;
		*lst = list;
	}
	else
		*lst = ft_lstnew(new);
}
