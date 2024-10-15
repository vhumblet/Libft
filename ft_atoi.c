#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int	sign;
	int	count;
	int	res;

	i = 0;
	sign = 1;
	count = 0;
	res = 1;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		count++;
		i++;
	}
	if (count > 1)
		return (0);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (count == 1 && sign < 0)
		return (res * sign);
	else
		return (res);
}