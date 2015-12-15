/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:40:42 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/15 16:43:18 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/uio.h>
# include "libft.h"

typedef struct	s_tetri
{
	char	form[4][5];
	char	symb;
	size_t	height;
	size_t	large;
}				t_tetri;

t_tetri		ft_placebuf(char *buf, t_tetri form);
void		ft_error(char *str);
int			ft_checkbuf(char *buf);
char		ft_read(char *file);
int			ft_checknext(char *buf);

#endif
