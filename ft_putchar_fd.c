#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t	i;
    char	*res;

    i = 0;
    if (!s || !f)
    {
        return (NULL);
    }
    res = (char*)malloc((sizeof(*res) * (ft_strlen(s) + 1)));
    if (!res)
    {
        return (NULL);
    }
    while (s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}