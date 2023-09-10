#include "libft.h"
#include <stdlib.h>

static int	ft_to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_trimed_str(char const *s1, size_t left, size_t len)
{
	char	*trimed;
	size_t	i;

	if (len <= 0 || left >= ft_strlen(s1))
		return (ft_strdup(""));
	trimed = malloc(sizeof(char) * (len + 1));
	if (!trimed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimed[i] = s1[left + i];
		i++;
	}
	trimed[i] = '\0';
	return (trimed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	left;
	size_t	right;

	left = 0;
	right = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_to_trim(s1[left], set))
		left++;
	while (ft_to_trim(s1[right], set))
		right--;
	return (ft_trimed_str(s1, left, (right - left + 1)));
}
