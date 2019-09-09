/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:34:44 by taethan           #+#    #+#             */
/*   Updated: 2019/09/09 15:34:46 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int			f_quant;
	t_struct	f_stor[26];
	int			square_side;
	int			index;

	index = 0;
	f_quant = 0;
	if (argc == 2)
	{
		if (!(valid(argv[1], &f_quant, f_stor, index)) || f_quant == 0)
		{
			ft_putendl("error");
			return (0);
		}
		square_side = square_size(4 * f_quant);
		solution(f_stor, f_quant, square_side);
	}
	else
		ft_putendl("usage: ./fillit input_file");
	return (0);
}
