#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;

	len_s = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len_s);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (len_s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20] = "bonjour ";
	char	src[20] = "les amis";
	char	dest2[20] = "bonjour ";
	
	printf("ft_fonction = %zu\n", ft_strlcpy(dest, src, 6));
	printf("ft_fonction = %s\n", dest);
	printf("lb_fonction = %lu\n", strlcpy(dest2, src, 6));
	printf("lb_fonction = %s\n", dest2);
	return (0);
}*/