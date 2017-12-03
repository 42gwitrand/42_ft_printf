/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:27:37 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/02 16:27:38 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		my_swap2(char *a, char *b)
{
	char c;

	c = *b;
	*b = *a;
	*a = c;
	return (0);
}

char			*ft_revstr(char *str)
{
	int i;
	int len;

	len = 0;
	i = 1;
	while (str[len] != 0)
		len = len + 1;
	while (i <= len / 2)
	{
		my_swap2(&str[i - 1], &str[len - i]);
		i = i + 1;
	}
	return (str);
}
