#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = -1;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (tmp1[++i] && tmp2[i] && i < n - 1)
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - tmp1[i]);
	return (tmp1[i] - tmp2[i]);
}