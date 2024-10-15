#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*al_mem;

	al_mem = malloc(count * size);
	if (!al_mem)
		return (NULL);
	ft_bzero(al_mem, count * size);
	return (al_mem);
}