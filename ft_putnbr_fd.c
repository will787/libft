#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{   
    int div;
    int tmp;

    if(n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
    }
    else if(n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else if(n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + 48, fd);
    }
    else   
        ft_putchar_fd(n + 48, fd);
}

int main(void)
{   
    ft_putnbr_fd(1000, 1);
    printf("\n");
}