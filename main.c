/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 14:44:41 by vgosset           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/16 12:39:31 by vgosset          ###   ########.fr       */
=======
/*   Updated: 2015/12/15 16:44:26 by jle-quer         ###   ########.fr       */
>>>>>>> 535f529ea128ec7165aeb48cd5e9e66e3c479418
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	size_t	cpt;
	char	*buf;
	t_tetri	**tab;

	if (argc != 2)
		ft_putendl("error");
	fd = open(argv[1], O_RONLY);
	if (fd == -1)
		ft_putendl("error");
	cpt = ft_read(fd);
	if (cpt  == 0)
		ft_putendl("error");
	if (close(fd) = -1)
		ft_putendl("error");
	fd = open(argv[1], O_RONLY);
	tab = ft_readtoplace(fd, cpt);
}
