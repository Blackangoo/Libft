#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i_str;
	size_t	i_to_find;

	i_str = 0;
	if (s2[0] == '\0')
		return ((char *) s1);
	while (s1[i_str] && i_str < n)
	{
		i_to_find = 0;
		if (s1[i_str] == s2[i_to_find])
		{
			while (s1[i_str + i_to_find] == s2[i_to_find] \
			&& s1[i_str + i_to_find] && (i_str + i_to_find) < n)
			{
				i_to_find++;
				if (s2[i_to_find] == '\0')
					return ((char *) &s1[i_str]);
			}
		}
		i_str++;
	}
	return (0);
}
