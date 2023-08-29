#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i_str;
	int	nb;
	int	sign;

	i_str = 0;
	nb = 0;
	sign = 1;
	while ((nptr[i_str] >= 9 && nptr[i_str] <= 13) || (nptr[i_str] == 32))
		i_str++;
	if ((nptr[i_str] == '+' && nptr[i_str + 1] != '-'))
		i_str++;
	if (nptr[i_str] == '-')
	{
		sign = -1;
		i_str++;
	}
	while (nptr[i_str] >= '0' && nptr[i_str] <= '9')
	{
		nb = nb * 10 + (nptr[i_str] - '0');
		i_str++;
	}
	return (nb * sign);
}
