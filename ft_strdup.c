#include "libft.h"

char	*ft_strdup(const char *s)
{
    char	*res;
    int		i;

    i = 0;
    res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    while (s[i] != '\0')
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}