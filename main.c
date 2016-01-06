/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 18:24:25 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/06 14:40:13 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		cpt;
	t_tetri	**tab;
	char	**res;

	if (argc != 2)
		return (ft_error());
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_error());
	cpt = ft_read(fd);
	if (cpt == 0)
		return (ft_error());
	if (close(fd) == -1)
		return (ft_error());
	fd = open(argv[1], O_RDONLY);
	tab = ft_readtoplace(fd, cpt);
	res = ft_res_tab(tab, cpt);
	ft_display(res);
	return (0);
}
