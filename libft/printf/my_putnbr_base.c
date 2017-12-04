/*
** my_putnbr_base.c for my_putnbr_base.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 11:52:03 2016 Witrand Gaspard
** Last update Tue Oct 11 21:05:31 2016 Witrand Gaspard
*/

#include "libft.h"

int		my_putnbr_base(long nb, char *base, int *count)
{
  unsigned int	len;

  len = ft_strlen(base);
  if (nb < 0)
    {
      ft_putchar('-');
      (*count)++;
      nb = -nb;
    }
  if (nb >= len)
    {
      my_putnbr_base(nb / len, base, count);
      my_putnbr_base(nb % len, base, count);
    }
  else
    {
      ft_putchar(base[nb]);
      (*count)++;
    }
  return (0);
}
