/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:26:51 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/02 16:26:52 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_base(int nbr, char *base)
{
	int size_base;
	int div;
	int result;

	div = 1;
	size_base = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	while (nbr / div >= size_base)
		div = div * size_base;
	while (div > 0)
	{
		result = (nbr / div) % size_base;
		ft_putchar(base[result]);
		div = div / size_base;
	}
}
