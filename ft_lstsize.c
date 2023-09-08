#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*list;
	int		size;

	list = lst;
	size = 0;
	if (list)
	{
		while (list)
		{
			size++;
			list = list->next;
		}
	}
	return (size);
}
