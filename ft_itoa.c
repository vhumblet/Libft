#include "libft.h"

static	int	ft_malloc_size(int n)
{
	int		nb;
	long	ln;

	ln = n;
	nb = 0;
	if (ln < 0)
	{
		ln = -ln;
		nb++;
	}
	else if (!ln)
		return (1);
	while (ln)
	{
		ln /= 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	long	ln;
	int		i;
	char	*ret;

	i = ft_malloc_size(n);
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	ret[i] = 0;
	ln = n;
	if (ln < 0)
	{
		ret[0] = '-';
		ln = -ln;
	}
	else if (!ln)
		ret[0] = '0';
	while (ln)
	{
		ret[--i] = (ln % 10) + 48;
		ln /= 10;
	}
	return (ret);
}