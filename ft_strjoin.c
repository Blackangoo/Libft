#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*joined;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	joined = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!joined)
		return (NULL);
	while (i < len_s1)
	{
		joined[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len_s2)
	{
		joined[len_s1 + i] = s2[i];
		i++;
	}
	joined[len_s1 + i] = '\0';
	return (joined);
}
