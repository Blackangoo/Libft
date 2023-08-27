#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
    size_t	src_len;
    size_t	i;

    dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    if (dstsize - 1 <= dest_len)
        return(src_len + dstsize);
    while (dest_len + i < dstsize - 1)
    {
        dst[dest_len + i] = src[i];
        i++;
    }
    dst[dest_len + i] = '\0';
    return(dest_len + src_len);
}
