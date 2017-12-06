/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:38:27 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 10:38:29 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
