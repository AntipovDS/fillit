/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstradd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:11:00 by taethan           #+#    #+#             */
/*   Updated: 2019/04/30 19:12:30 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstradd(t_list **alst, t_list *new)
{
	t_list *temp;

	if (!alst)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
	}
	else
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
