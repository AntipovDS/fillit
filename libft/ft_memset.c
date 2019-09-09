/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:38:25 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:39:12 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	t;
	size_t			i;

	i = 0;
	s = (unsigned char *)b;
	t = (unsigned char)c;
	while (i < len)
	{
		s[i] = t;
		i++;
	}
	return (b);
}
