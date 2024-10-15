#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	end;

	i = -1;
	end = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[end]);
	while (s[++i])
		if (s[i] == c)
			return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "bonjour ceci est un test je repete ceci est u2n test";

	printf("ft = %s\n", ft_strchr(str, '2'));
	printf("lb = %s\n", strchr(str, '2'));
}*/