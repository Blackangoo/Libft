#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i] && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
