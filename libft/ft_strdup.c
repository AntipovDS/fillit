/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 10:40:10 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:24:59 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	if (len + 1 < len)
		return (NULL);
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	s2 = ft_strcpy(s2, s1);
	return (s2);
}
