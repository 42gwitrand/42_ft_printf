/*
** my_printf_checks.c for my_printf in /home/gwitrand/Projects/Mini-project/my_printf/lib/my/printf
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Wed Nov  9 15:36:35 2016 Witrand Gaspard
** Last update Wed Nov  9 15:36:36 2016 Witrand Gaspard
*/

#include "../include/lib.h"

void	isstring(va_list ap, int *count)
{
  char	*str;

  str = va_arg(ap, char *);
  my_putstr(str);
  (*count) += my_strlen(str);
}

void	isint(va_list ap, int *count)
{
  my_put_nbr(va_arg(ap, int), count);
}

void	ischar(va_list ap, int *count)
{
  my_putchar(va_arg(ap, int));
  ++(*count);
}

void	isintpointer(va_list ap, int *count)
{
      my_put_nbr(va_arg(ap, char * ), count);
}
