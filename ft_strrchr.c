#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			str = ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == (char) c)
	{
		str = ((char *) &s[i]);
	}
	return (str);
}
