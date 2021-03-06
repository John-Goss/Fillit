/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 18:27:19 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/06 14:36:46 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "Libft/libft.h"
# include <fcntl.h>
# include <sys/uio.h>

typedef struct	s_tetri
{
	char		form[4][5];
	char		letter;
	size_t		height;
	size_t		large;
}				t_tetri;

size_t			ft_countheight(char form[4][5], char a);
size_t			ft_countlarge(char form[4][5], char a);
t_tetri			*ft_placebuf(char *buf, int i);
int				ft_checkbuf(char *buf);
int				ft_read(int fd);
int				ft_checknext(char *buf);
t_tetri			**ft_createtab(size_t cpt);
void			ft_replacechar(char *buf, char c, char d);
t_tetri			**ft_readtoplace(int fd, size_t cpt);
void			ft_display(char **res);
int				ft_error(void);
size_t			ft_size_tab(size_t cpt);
char			**ft_init_last_tab(size_t size);
char			**ft_res_tab(t_tetri **tab, size_t cpt);
void			ft_replacetop(t_tetri *tab);
void			ft_replaceleft(t_tetri *tab);
void			ft_moveleft(t_tetri *tab);
void			ft_delete_tetri(int i, int j, char **res, t_tetri *tab);
void			ft_place_tetri(int i, int j, char **res, t_tetri *tab);
int				ft_check_place(int i, int j, char **res, t_tetri *tab);
int				ft_fill_square(char **res, t_tetri **tab, int size, int n);

#endif
