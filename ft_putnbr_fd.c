#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    int	x;

    x = n;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        if (n == -2147483648)
        {
            ft_putchar_fd('2', fd);
            x = -147483648;
        }
        x = -1 * x;
    }
    if (x >= 10)
    {
        ft_putnbr_fd((x / 10), fd);
    }
    ft_putchar_fd(((x % 10) + '0'), fd);
}