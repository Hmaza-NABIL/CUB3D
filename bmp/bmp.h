/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bmp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnabil <hnabil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:54:10 by hnabil            #+#    #+#             */
/*   Updated: 2021/01/17 17:57:44 by hnabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BMP_H
# define BMP_H
# include "../srcs/cub.h"

typedef struct	s_bitmap_file_header
{
	unsigned int	bf_size;
	unsigned short	bf_reserved1;
	unsigned short	bf_reserved2;
	unsigned int	bf_off_bits;
}				t_bitmap_file_header;

typedef struct	s_bitmap_info_header
{
	unsigned int	bi_size;
	int				bi_width;
	int				bi_height;
	unsigned short	bi_planes;
	unsigned short	bi_bit_count;
	unsigned int	bi_compression;
	unsigned int	bi_size_image;
	int				bi_x_pels_per_meter;
	int				bi_y_pels_per_meter;
	unsigned int	bi_clr_used;
	unsigned int	bi_clr_important;
}				t_bitmap_info_header;

int				save_bmp(t_all *p);

#endif
