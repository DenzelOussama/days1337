#include <unistd.h>

void    ft_putchar(char i)
{
    write(1, &i, 1);
}

int    ft_pow(int base, int exponent)
{
    int    result;

    result = 1;
    while (exponent > 0)
    {
        result = result * base;
        exponent--;
    }
    return (result);
}

int    ft_log(int log)
{
    int    logg;

    logg = 0;
    while (log >= 10)
    {
        log /= 10;
        logg++;
    }
    return (logg);
}

void    ft_putnbr(int nb)
{
    int    logg;
    int    n;

    if (nb == 0)
    {
        write(1, "0", 1);
        return ;
    }
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    logg = ft_log(nb);
    while (logg >= 0)
    {
        n = (nb / (ft_pow(10, logg))) % 10;
        ft_putchar(n + '0');
        logg--;
    }
} 