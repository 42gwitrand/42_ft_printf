/*
** my_printf_checks2.c for my_printf in /home/gwitrand/Projects/Mini-project/my_printf/lib/my/printf
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Wed Nov  9 15:35:59 2016 Witrand Gaspard
** Last update Wed Nov 16 13:39:59 2016 Witrand Gaspard
*/

#include "../include/lib.h"

void	ispointerb16(va_list ap, int *count)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", count);
}

void	ispointerb16caps(va_list ap, int *count)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF", count);
}

void	ispointeraddress(va_list ap, int *count)
{
  my_putstr("0x");
  (*count)++;
  my_putnbr_base(va_arg(ap, unsigned long long), "0123456789abcdef", count);
}

void	isintb8(va_list ap, int *count)
{
  my_putnbr_base(va_arg(ap, unsigned int), "01234567", count);
}

void	isinttobinary(va_list ap, int *count)
{
  my_putnbr_base(va_arg(ap, unsigned long long), "01", count);
}
