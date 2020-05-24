#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t len_src;
    size_t len_dest;
    size_t count;

    len_src = ft_strlen(src);
    len_dest = ft_strlen(dest);
    if (n > len_dest)
    {
        count = len_dest;
        n--;
        while (count < n && *src != '\0')
        {
            dest[count] = *src;
            count++;
            src++;
        }
        dest[count] = '\0';
        return (len_src + len_dest);
    }
    return (len_src + n);
}