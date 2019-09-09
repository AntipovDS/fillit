/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:32:11 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 11:04:24 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (needle[i] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		k = 0;
		while (needle[k] == haystack[i + k] && i + k < len)
		{
			if (needle[k + 1] == '\0')
				return ((char *)haystack + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
