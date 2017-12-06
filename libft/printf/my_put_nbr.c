/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:36:07 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 11:00:01 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_putchar(int *count, char c)
{
	ft_putchar(c);
	++(*count);
	return (int)count;
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
	return (0);
}
