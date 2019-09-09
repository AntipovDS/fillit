/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:03:32 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 15:34:05 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	if (!s)
		return (NULL);
	if (!(str = malloc(len + 1)))
		return (NULL);
	n = 0;
	while (n < len)
	{
		str[n] = s[start + n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
