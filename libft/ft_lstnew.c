/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:29:09 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 16:51:17 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	newlist = (t_list*)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
		newlist->next = NULL;
	}
	else
	{
		newlist->content = malloc(content_size);
		if (newlist->content == NULL)
		{
			free(newlist);
			return (NULL);
		}
		newlist->content = ft_memcpy(newlist->content, content, content_size);
		newlist->content_size = content_size;
		newlist->next = NULL;
	}
	return (newlist);
}
