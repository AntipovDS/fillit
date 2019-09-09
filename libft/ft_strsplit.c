/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 16:28:09 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 14:59:22 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**mas;

	i = 0;
	j = -1;
	if (!s || !(mas = (char **)malloc(sizeof(*mas) *
		(words = ft_wordcount((char *)s, c)) + 1)))
		return (NULL);
	while (j++ < words)
	{
		i = 0;
		while (*s == c)
			s++;
		if (!(mas[j] = ft_strnew(ft_wordlen((char *)s, c))))
		{
			ft_delarr(mas);
			return (NULL);
		}
		while (*s != c && *s)
			mas[j][i++] = *s++;
	}
	mas[j - 1] = 0;
	return (mas);
}
