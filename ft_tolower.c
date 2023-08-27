#include "libft.h"

static int ft_is_upper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_tolower(int c)
{
	if (ft_is_upper(c))
	{
		return (c + 32);
	}
	return (c);
}
