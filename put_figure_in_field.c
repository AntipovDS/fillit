/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_figure_in_field.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:34:53 by taethan           #+#    #+#             */
/*   Updated: 2019/09/09 15:34:55 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		f_size(int *coord_mas)
{
	int	index;
	int	max;

	index = 0;
	max = 0;
	while (index < 4)
	{
		if (max < coord_mas[index])
			max = coord_mas[index];
		index++;
	}
	return (++max);
}

int		move_in_out(int *coord_mas)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (coord_mas[index] == 0)
			return (0);
		index++;
	}
	while (--index >= 0)
	{
		coord_mas[index]--;
	}
	return (move_in_out(coord_mas));
}

void	put_figure_in_xy(int struct_index, char *buff, t_struct *f_stor)
{
	int xy_index;
	int buff_index;

	buff_index = 0;
	xy_index = 0;
	while (buff[buff_index])
	{
		if (buff[buff_index] == '#')
		{
			f_stor[struct_index].x[xy_index] = buff_index % 5;
			f_stor[struct_index].y[xy_index] = buff_index / 5;
			xy_index++;
		}
		buff_index++;
	}
}

void	put_figure_in_struct(char *all_buff, t_struct *f_stor, int f_quant)
{
	int		struct_index;
	int		buff_index;
	char	one_buff[22];
	char	let;

	buff_index = 0;
	struct_index = 0;
	let = 'A';
	while (buff_index != f_quant * 21)
	{
		ft_strncpy(one_buff, &all_buff[buff_index], 21);
		one_buff[21] = '\0';
		put_figure_in_xy(struct_index, one_buff, f_stor);
		move_in_out(f_stor[struct_index].x);
		move_in_out(f_stor[struct_index].y);
		f_stor[struct_index].width = f_size(f_stor[struct_index].x);
		f_stor[struct_index].height = f_size(f_stor[struct_index].y);
		f_stor[struct_index].letter = let++;
		struct_index++;
		buff_index = buff_index + 21;
		f_stor[struct_index - 1].number = struct_index;
	}
}
