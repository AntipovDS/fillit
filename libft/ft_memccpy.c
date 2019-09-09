/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:14:28 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:56:14 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcc;
	unsigned char	b;

	b = (unsigned char)c;
	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcc[i];
		if (dest[i] == b)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
