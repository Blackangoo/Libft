#include "libft.h"
#include <stdlib.h>

static int	ft_len_of_n(int n)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		length++;
		n = n * (-1);
	}
	if (n == 0)
		length++;
	while (n != 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

static char	*ft_put_n_in_str(char *integer, long n, int len)
{
	int	pos;

	pos = 0;
	if (n < 0)
	{
		integer[0] = '-';
		n = n * (-1);
		pos = 1;
	}
	while (len > pos)
	{
		integer[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--; 
	}
	return (integer);
}

char	*ft_itoa(int n)
{
	char	*integer;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_len_of_n(nbr);
	integer = malloc(sizeof(char) * (len + 1));
	if (!integer)
		return (NULL);
	integer = ft_put_n_in_str(integer, nbr, len);
	integer[len] = '\0';
	return (integer);
}
