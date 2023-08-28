#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned int	i;

	s1 = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char) c)
			return ((void *) &s1[i]);
		i++;
	}
	return (NULL);
}
