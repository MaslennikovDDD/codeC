#include "libft.h"

char		**ft_cubalibre(int *app, char **rez, int i)
{
    free(app);
    while (i >= 0)
    {
        free(rez[i]);
        i--;
    }
    free(rez);
    return (NULL);
}

int			*ft_wordsearch(char const *s, int *arr, char c)
{
    arr[0] = arr[0] + arr[1];
    arr[1] = 0;
    while (s[arr[0]] == c)
        arr[0]++;
    while (s[arr[0] + arr[1]] != c && s[arr[0] + arr[1]] != '\0')
        arr[1]++;
    return (arr);
}

char		**ft_mallocmaster(int count, char const *s, char c)
{
    char	**rez;
    int		i;
    int		*arr;

    rez = (char**)malloc((count + 1) * sizeof(char *));
    arr = ft_calloc(sizeof(int), 2);
    if (rez == NULL || arr == NULL)
    {
        free(rez);
        return (NULL);
    }
    i = 0;
    while (i < count)
    {
        ft_wordsearch(s, arr, c);
        rez[i] = ft_substr(s, (unsigned int)arr[0], (size_t)arr[1]);
        if (rez[i] == NULL)
            return (ft_cubalibre(arr, rez, i));
        i++;
    }
    free(arr);
    rez[i] = NULL;
    return (rez);
}

char		**ft_split(char const *s, char c)
{
    char	**rez;
    int		count;
    int		i;

    if (s == NULL)
        return (NULL);
    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] != c && s[i] != '\0')
            count++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    rez = ft_mallocmaster(count, s, c);
    return (rez);
}