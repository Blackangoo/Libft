#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *) s;
	while (n)
	{
		*(s1++) = (unsigned char) c;
		n--;
	}
	return (s);
}
