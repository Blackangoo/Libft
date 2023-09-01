#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;
	unsigned long	i;

	tab = malloc(size * nmemb);
	i = 0;
	if (!tab)
		return (NULL);
	else
	{
		while (i < size * nmemb)
		{
			tab[i] = 0;
			i++;
		}
		return (tab);
	}
}
