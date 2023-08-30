#include "libft.h"

	/*Si src est avant dest dans la mémoire (c'est-à-dire que src est à une adresse mémoire inférieure à celle de dest),
	la copie commence depuis la fin de la zone source pour éviter d'écraser des données non encore copiées.
    Si dest est avant src dans la mémoire, la copie commence depuis le début de la zone source.*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	destination = (char *)dest;
	source = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (destination > source)
	{
		while (n-- > 0)
			destination[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}
