/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_checks2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:37:53 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 10:37:55 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	ft_putstr("0x");
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
