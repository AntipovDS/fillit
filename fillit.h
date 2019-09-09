/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taethan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 15:34:25 by taethan           #+#    #+#             */
/*   Updated: 2019/09/09 15:34:36 by taethan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <libft.h>
# include <stdio.h>

typedef	struct	s_struct
{
	int			x[4];
	int			y[4];
	int			height;
	int			width;
	char		letter;
	int			number;
}				t_struct;

int				valid(char *argv, int *f_quant, t_struct *f_stor, int index);
int				input_field_valid(char *buff);
int				input_figure_valid(char *buff);
void			put_figure_in_struct(char *all_buff,
				t_struct *f_stor, int f_quant);
void			put_figure_in_xy(int struct_index,
				char *buff, t_struct *f_stor);
int				move_in_out(int *coord_mas);
int				size_figure(int *coord_mas);
int				square_size(int f_quant);
void			solution(t_struct *f_stor, int f_quant, int square_size);
void			print_all(char map[15][15], int square_size);

#endif
