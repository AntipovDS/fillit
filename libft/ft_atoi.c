/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 21:34:40 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 12:42:38 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		a;
	long	b;

	i = 0;
	b = 0;
	a = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		a = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		if ((b * 10 + str[i] - '0') / 10 != b)
			return (a == 1 ? 0 : -1);
		b = b * 10 + str[i] - '0';
		i++;
	}
	if (a == 1)
		return ((int)-b);
	else
		return ((int)b);
}
