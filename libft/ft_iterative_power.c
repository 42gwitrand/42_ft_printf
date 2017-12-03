/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:24:07 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/02 16:24:11 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_power(int nb, int power)
{
	int a;

	if (power == 0)
		return (1);
	power = power - 1;
	a = nb;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		power--;
		nb = nb * a;
	}
	return (nb);
}
