#include "libft.h"

static int	ft_is_lower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_is_lower(c))
	{
		return (c - 32);
	}
	return (c);
}
