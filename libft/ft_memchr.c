/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:00:59 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:56:01 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	t;

	ss = (unsigned char *)s;
	t = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == t)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
