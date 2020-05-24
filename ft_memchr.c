#include "libft.h"

void        *ft_memchr(const void *arr, int symbol, size_t n)
{
    unsigned char	*arr_point;
    unsigned char	ch_symbol;
    size_t				i;
    size_t				size;

    arr_point = (unsigned char*)arr;
    i = 0;
    size = n - 1;
    ch_symbol = symbol;
    while (i < size && arr_point[i] != ch_symbol)
        i++;
    if (arr_point[i] == ch_symbol && n != 0)
        return (arr_point + i);
    else
        return (NULL);
}
