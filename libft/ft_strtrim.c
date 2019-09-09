/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:57:40 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 14:55:36 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (len && len != i && (s[len - 1] == ' ' || s[len - 1] == '\n' ||
				s[len - 1] == '\t'))
		len--;
	len = len - i;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	j = -1;
	while (++j < len)
		str[j] = (char)s[i++];
	return (str);
}
