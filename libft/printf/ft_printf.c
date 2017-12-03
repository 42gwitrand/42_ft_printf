/*
** my_printf.c for my_printf in /home/gwitrand/Projects/Mini-project/my_printf/lib/my/printf
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Wed Nov  9 15:35:45 2016 Witrand Gaspard
** Last update Wed Nov 16 14:51:01 2016 Witrand Gaspard
*/

#include "../include/lib.h"

typedef struct	s_flag
{
  char		c;
  int		(*fun)(va_list, int *);
}		t_flag;

static t_flag g_tab[NB_FLAGS] =
  {
    {'s', &isstring},
    {'i', &isint},
    {'d', &isint},
    {'c', &ischar},
    {'u', &isintpointer},
    {'x', &ispointerb16},
    {'X', &ispointerb16caps},
    {'p', &ispointeraddress},
    {'o', &isintb8},
    {'b', &isinttobinary},
    {'S', &isstringhigh},
    {'m', &success},
    {'f', &isfloat},
    {'%', &ispercent}
  };

void	printit(char c, va_list ap, int *count)
{
int	i;

 i = 0;
 while (g_tab[i].c)
   {
     if (g_tab[i].c == c)
       g_tab[i].fun(ap, count);
     ++i;
   }
}

int		ft_printf(const char *str, ...)
{
  va_list	ap;
  int		i;
  int		count;

  i = 0;
  count = 0;
  va_start(ap, str);

  while (str[i])
    {
      if (str[i + 1] && str[i] == '%')
	{
	  ++i;
	  printit(str[i], ap, &count);
	}
      else
	{
	  my_putchar(str[i]);
	  ++count;
	}
      i++;
    }
  va_end(ap);
  return (count);
}
