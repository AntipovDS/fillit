/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:35:01 by taethan           #+#    #+#             */
/*   Updated: 2019/09/09 15:35:02 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_all(char map[15][15], int square_size)
{
	int y;
	int x;

	y = 0;
	while (y < square_size)
	{
		x = 0;
		while (x < square_size)
		{
			ft_putchar(map[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	delete_f(char map[15][15], t_struct *f_stor, int y_step, int x_step)
{
	int index;

	index = 0;
	while (index < 4)
	{
		map[f_stor->y[index] + y_step][f_stor->x[index] + x_step] = '.';
		index++;
	}
}

int		check_write(char map[15][15], t_struct *f_stor, int y_step, int x_step)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (map[f_stor->y[i] + y_step][f_stor->x[i] + x_step] != '.')
			return (0);
	}
	while (--i >= 0)
	{
		map[f_stor->y[i] + y_step][f_stor->x[i] + x_step] = f_stor->letter;
	}
	return (1);
}

int		algorithm(char map[15][15], t_struct *f_stor,
		int f_quant, int square_size)
{
	int y_step;
	int x_step;

	y_step = 0;
	while (y_step + f_stor->height <= square_size)
	{
		x_step = 0;
		while (x_step + f_stor->width <= square_size)
		{
			if (!(check_write(map, f_stor, y_step, x_step)))
				x_step++;
			else if (f_stor->number == f_quant || algorithm(map, ++f_stor,
					f_quant, square_size))
			{
				return (1);
			}
			else
			{
				delete_f(map, --f_stor, y_step, x_step);
				x_step++;
			}
		}
		y_step++;
	}
	return (0);
}

void	solution(t_struct *f_stor, int f_quant, int square_size)
{
	int		index;
	char	map[15][15];

	index = 0;
	while (index < 17)
	{
		ft_memset(map[index], '.', 16);
		index++;
	}
	while (algorithm(map, f_stor, f_quant, square_size) == 0
		&& square_size <= 16)
	{
		square_size++;
	}
	print_all(map, square_size);
}
