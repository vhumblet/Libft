#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[j] == 0)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		j = 0;
		if (s1[i] == s2[j])
			while (s1[i + j] == s2[j] && i + j < len && s2[j])
				j++;
		if (s1[i + j - 1] == s2[j - 1] && i + j <= len && s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str = "bonbonjourleleslesamis";
	char	*str2 = "";

	printf("ft = %s\n", ft_strnstr(str, str2, 0));
	printf("lb = %s\n", strnstr(str, str2, 0));
}*/