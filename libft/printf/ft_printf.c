/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:35:39 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 10:35:41 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			ft_putchar(str[i]);
			++count;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
