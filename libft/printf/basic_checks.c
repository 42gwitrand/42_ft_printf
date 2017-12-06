/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 10:35:30 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/06 10:35:33 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	isstring(va_list ap, int *count)
{
	char	*str;

	str = va_arg(ap, char *);
	ft_putstr(str);
	(*count) += ft_strlen(str);
}

void	isint(va_list ap, int *count)
{
	my_put_nbr(va_arg(ap, int), count);
}

void	ischar(va_list ap, int *count)
{
	ft_putchar(va_arg(ap, int));
	++(*count);
}

void	isintpointer(va_list ap, int *count)
{
	my_put_nbr((int)va_arg(ap, char *), count);
}
