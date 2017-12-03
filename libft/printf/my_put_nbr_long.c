/*
** my_put_nbr_long.c for my_printf in /home/gwitrand/Projects/Mini-project/my_printf/lib/my/printf
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Wed Nov  9 15:36:21 2016 Witrand Gaspard
** Last update Wed Nov  9 15:36:22 2016 Witrand Gaspard
*/

#include "../include/lib.h"

int	my_put_nbr_long(unsigned int nb, int *count)
{
  if (nb == 0)
    {
      my_putchar('0');
      ++(*count);
    }
  if (nb >= 10)
    {
      my_put_nbr_long(nb / 10, count);
      my_put_nbr_long(nb % 10, count);
    }
  if (nb > 0 && nb < 10)
    {
      my_putchar('0' + nb);
      ++(*count);
    }
  else
    return (0);
}
