/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:35:06 by taethan           #+#    #+#             */
/*   Updated: 2019/09/09 15:35:09 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	square_size(int cells)
{
	int square_side;

	square_side = 0;
	while (square_side * square_side < cells)
	{
		square_side++;
	}
	return (square_side);
}
