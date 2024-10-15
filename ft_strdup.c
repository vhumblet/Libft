#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*dup;
	int		i;

	str = (char *)s;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (dup == 0)
		return (0);
	if (!str)
	{
		*dup = '\0';
		return (dup);
	}
	i = 0;
	while (*str)
	{
		dup[i] = *str;
		str++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}