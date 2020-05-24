#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
    char	*dest_point;
    char	*src_point;

    src_point = (char*)src;
    dest_point = (char*)dest;
    if (src_point == NULL && dest_point == NULL)
        return (NULL);
    if (src > dest)
        while (n != 0)
        {
            *dest_point++ = *src_point++;
            n--;
        }
    else
    {
        while (n != 0)
        {
            dest_point[n - 1] = src_point[n - 1];
            n--;
        }
    }
    return (dest);
}