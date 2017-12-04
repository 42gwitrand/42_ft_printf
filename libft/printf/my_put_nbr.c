/*
** my_put_nbr.c for my_put_nbr.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:31:49 2016 Witrand Gaspard
** Last update Sun Nov 20 21:41:58 2016 Witrand Gaspard
*/

#include "libft.h"

int	to_putchar(int *count, char c)
{
  ft_putchar(c);
  ++(*count);
}

int	my_put_nbr(int nb, int *count)
{
  if (nb == 0)
      to_putchar(count, '0');
  if (nb < 0 && nb > -2147483647)
    {
      to_putchar(count, '-');
      nb = -nb;
    }
  if (nb >= 10 && nb <= 2147483647)
    {
      my_put_nbr(nb / 10, count);
      my_put_nbr(nb % 10, count);
    }
  if (nb > 0 && nb < 10)
      to_putchar(count, '0' + nb);
  if (nb == -2147483648)
    {
      to_putchar(count, '-');
      nb = 214748364;
      my_put_nbr(nb, count);
      to_putchar(count, '8');
    }
  else
    return (0);
}
