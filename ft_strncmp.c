#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (s1[++i] && s2[i] && i < n - 1)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("ft = %d\n", ft_strncmp(av[1], av[2], 10));
	printf("lb = %d\n", strncmp(av[1], av[2], 10));
}*/