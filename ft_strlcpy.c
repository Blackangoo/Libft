#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	ls;

	ls = 0;
	i = 0;
	while (*(src + ls) != '\0')
		ls++;
	if (dstsize < 1)
		return (ls);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	dst[i] = '\0';
	return (i);
}
