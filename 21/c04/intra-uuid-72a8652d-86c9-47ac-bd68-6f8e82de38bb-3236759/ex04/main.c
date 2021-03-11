#include <unistd.h>

void ft_putchar(char c)
{
  write(1 , &c, 1);
}

void    ft_putnbr_base(int nb, char *base)
{

    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if ((nb / 10) > 0)
        ft_putnbr_base(nb / 10, base);
    ft_putchar(nb % 10 + 48);
}

int main()
{
  char *base;
  ft_putnbr_base(-312,base);
  return (0);
}
