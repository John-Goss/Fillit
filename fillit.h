
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:40:42 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/15 11:08:17 by vgosset          ###   ########.fr       */
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

size_t		ft_countheight(t_tetri **tab, size_t j);
size_t		ft_countlarge(t_tetri **tab, size_t j);
t_tetri		ft_placebuf(char *buf, t_tetri form);
int			ft_checkbuf(char *buf);
char		ft_read(char *file);
int			ft_checknext(char *buf);

#endif
