#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destination;
    unsigned char *source;

    destination = (unsigned char *)dest;
    source = (unsigned char *)src;

    while (n)
    {
        *(destination++) = *(source++);
        n--;
    }
    return(dest);

}
