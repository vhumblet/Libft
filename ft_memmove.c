#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	i = -1;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (tmp_dst <= tmp_src)
		while (len--)
			tmp_dst[len] = tmp_src[len];
	else if (tmp_dst > tmp_src)
		while (++i < len)
			tmp_dst[i] = tmp_src[i];
	return (dst);
}
