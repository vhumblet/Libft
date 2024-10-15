#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[end]);
	while (s[--end] > -1)
		if (s[end] == c)
			return ((char *)&s[end]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "bonjour ceci est un test je repete ceci est u2n test";

	printf("ft = %s\n", ft_strrchr(str, '\0'));
	printf("lb = %s\n", strrchr(str, '\0'));
}*/