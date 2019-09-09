/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:33:17 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 15:04:01 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int			i;
	long int	nb;

	i = 1;
	if (n < 0)
	{
		i++;
		nb = -n;
	}
	else
		nb = n;
	while (nb > 9)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	if (!(str = malloc(len + 1)))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str[len] = '\0';
	while (len > 1 && n >= 10)
	{
		str[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	str[len - 1] = n + 48;
	return (str);
}
