#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		i;
	size_t		len_sub;

	if (!s)
		return(NULL);
	i = 0;
	substr = NULL;
	len_sub = ft_strlen(&s[start]);
	if (len_sub > len)
	{
		substr = (char *)malloc(sizeof(char) * len + 1);
		len_sub = len;
	}
	else if (len_sub < len)
		substr = (char *)malloc(sizeof(char) * len_sub + 1);
	if (!substr)
		return(NULL);
	while(s[start + i] && i < len_sub)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	return(substr);
}/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_substr(av[1], 6, 50));
	}
	return(0);
}*/