/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:58:35 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:50:34 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*srcs;

	if (dst == src)
		return (dst);
	dest = (unsigned char *)dst;
	srcs = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcs[i];
		i++;
	}
	return (dst);
}
