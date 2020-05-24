#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
    void	*str;

    str = malloc(size * count);
    if (str != NULL)
    {
        ft_bzero(str, size * count);
        return (str);
    }
    return (NULL);
}