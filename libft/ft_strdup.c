/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 12:41:21 by gwitrand          #+#    #+#             */
/*   Updated: 2017/12/02 12:41:23 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *str)
{
	int		len;
	int		i;
	char	*str_mal;

	len = ft_strlen(str);
	i = -1;
	if (!(str_mal = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i++ < len)
		str_mal[i] = str[i];
	return (str_mal);
}
