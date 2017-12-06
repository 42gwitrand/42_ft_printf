/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_put_nbr_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:36:20 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 10:36:22 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_put_nbr_long(unsigned int nb, int *count)
{
	if (nb == 0)
	{
		ft_putchar('0');
		++(*count);
	}
	else if (nb >= 10)
	{
		my_put_nbr_long(nb / 10, count);
		my_put_nbr_long(nb % 10, count);
	}
	else if (nb > 0 && nb < 10)
	{
		ft_putchar('0' + nb);
		++(*count);
	}
	return (0);
}
