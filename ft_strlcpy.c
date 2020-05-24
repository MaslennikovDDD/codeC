#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len_dest)
{
    size_t len_src;
    size_t count;

    count = 0;
    if (dest == NULL || src == NULL)
        return (0);
    len_src = ft_strlen(src);
    if (len_dest <= 0)
        return (len_src);
    len_dest >= len_src ? len_dest = len_src : len_dest--;
    while (count < len_dest)
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return (len_src);
}