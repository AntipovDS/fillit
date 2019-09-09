/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:29:46 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 16:40:02 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		(*alst)->next = NULL;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
