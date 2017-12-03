/*
** my_printf_checks3.c for my_printf in /home/gwitrand/Projects/Mini-project/my_printf/lib/my/printf
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Wed Nov  9 15:36:08 2016 Witrand Gaspard
** Last update Wed Nov 16 14:45:53 2016 Witrand Gaspard
*/

#include "../include/lib.h"

void	print_nonprintable(char c, int *count)
{
  int	i;

  i = 0;
  if (c < 10)
    {
      my_putstr("\\00");
      my_putnbr_base(c, "01234567", count);
      (*count) += 3;
    }
  if (c >= 10 && c < 100)
    {
      my_putstr("\\0");
      my_putnbr_base(c, "01234567", count);
      (*count) += 2;
    }
  if (c >= 100)
    {
      my_putstr("\\");
      my_putnbr_base(c, "01234567", count);
      ++(*count);
    }
}

void	isstringhigh(va_list ap, int *count)
{
  int	i;
  char	*str2;

  i = 0;
  str2 = va_arg(ap, char *);
  while (str2[i])
    {
      if (str2[i] > 37 && str2[i] <= 127)
	{
	  my_putchar(str2[i]);
	  ++(*count);
	}
      else
	{
	  print_nonprintable(str2[i], count);
	}
      i++;
    }
}

void		isfloat(va_list ap, int *count)
{
  double	nb;
  long long	j;

  nb = va_arg(ap, double);
  j = nb;
  my_put_nbr(j, count);
  nb = nb - j;
  my_putchar('.');
  j = nb * 1000000;
  (*count)++;
  my_put_nbr(j, count);
}

void	ispercent(va_list ap, int *count)
{
  my_putchar('%');
  (*count)++;
}

void	success(va_list ap, int *count)
{
  char	*str2;

  str2 = "Success";
  my_putstr(str2);
  (*count) += 7;
}
