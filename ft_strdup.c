#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	unsigned long	len;
	unsigned long	i;
	char			*tab;

	len = ft_strlen(s);
	i = 0;
	tab = malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	else
	{
		while (i < len)
		{
			tab[i] = s[i];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
}
