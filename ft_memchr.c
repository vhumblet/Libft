#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		*tmp;

	i = 0;
	tmp = (int *)s;
	while (i < n - 1&& tmp[i])
	{
		if (tmp[i] == c)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}