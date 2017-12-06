/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_checks3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:35:53 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 10:58:27 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			print_nonprintable(char c, int *count)
{
	int			i;

	i = 0;
	if (c < 10)
	{
		ft_putstr("\\00");
		my_putnbr_base(c, "01234567", count);
		(*count) += 3;
	}
	if (c >= 10 && c < 100)
	{
		ft_putstr("\\0");
		my_putnbr_base(c, "01234567", count);
		(*count) += 2;
	}
	if (c >= 100)
	{
		ft_putstr("\\");
		my_putnbr_base(c, "01234567", count);
		++(*count);
	}
}

void			isstringhigh(va_list ap, int *count)
{
	int			i;
	char		*str2;

	i = 0;
	str2 = va_arg(ap, char *);
	while (str2[i])
	{
		if (str2[i] > 37 && str2[i] <= 127)
		{
			ft_putchar(str2[i]);
			++(*count);
		}
		else
		{
			print_nonprintable(str2[i], count);
		}
		i++;
	}
}

void			isfloat(va_list ap, int *count)
{
	double		nb;
	long long	j;

	nb = va_arg(ap, double);
	j = nb;
	my_put_nbr(j, count);
	nb = nb - j;
	ft_putchar('.');
	j = nb * 1000000;
	(*count)++;
	my_put_nbr(j, count);
}

void			ispercent(__attribute__((unused)) va_list ap, int *count)
{
	ft_putchar('%');
	(*count)++;
}

void			success(__attribute__((unused)) va_list ap, int *count)
{
	char		*str2;

	str2 = "Success";
	ft_putstr(str2);
	(*count) += 7;
}
