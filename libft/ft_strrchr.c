/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:24:38 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:06:09 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char a;
	char *tmp;
	char *t;

	a = (char)c;
	t = (char *)s;
	tmp = NULL;
	while (*t)
	{
		if (*t == a)
			tmp = t;
		t++;
	}
	if (*t == a)
	{
		return (t);
	}
	return (tmp);
}
