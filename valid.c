/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:35:13 by taethan           #+#    #+#             */
/*   Updated: 2019/09/09 15:35:15 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		input_figure_valid(char *buff)
{
	int index;
	int pair;

	index = 0;
	pair = 0;
	while (buff[index])
	{
		if (buff[index] == '#')
		{
			if (buff[index + 1] == '#')
				pair++;
			if (index != 0 && buff[index - 1] == '#')
				pair++;
			if (index <= 13 && buff[index + 5] == '#')
				pair++;
			if (index >= 5 && buff[index - 5] == '#')
				pair++;
		}
		index++;
	}
	if (pair == 6 || pair == 8)
		return (1);
	return (0);
}

int		input_field_valid(char *buff)
{
	int index;
	int dot;
	int hashtag;
	int slash_n;

	index = 0;
	dot = 0;
	hashtag = 0;
	slash_n = 0;
	if (buff[0] == '\n')
		return (0);
	while (buff[index])
	{
		if (buff[index] == '.')
			dot++;
		if (buff[index] == '#')
			hashtag++;
		if (buff[index] == '\n')
			slash_n++;
		index++;
	}
	if (dot == 12 && hashtag == 4 && (slash_n == 5 || slash_n == 4))
		return (1);
	return (0);
}

int		valid(char *argv, int *f_quant, t_struct *f_stor, int index)
{
	int		ret;
	char	all_buff[546];
	int		fd;
	char	one_buff[22];

	if (!(fd = open(argv, O_RDONLY)) || fd < 0)
	{
		ft_putendl("error");
		return (0);
	}
	ft_memset(all_buff, '\0', 546);
	if ((ret = read(fd, all_buff, 546)) <= 0)
		return (0);
	while (all_buff[index])
	{
		ft_strncpy(one_buff, &all_buff[index], 21);
		if (!(input_field_valid(one_buff)) || !(input_figure_valid(one_buff)))
			return (0);
		*f_quant = *f_quant + 1;
		index = index + 21;
	}
	if (one_buff[20] != '\0')
		return (0);
	put_figure_in_struct(all_buff, f_stor, *f_quant);
	return (1);
}
