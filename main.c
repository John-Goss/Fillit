/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 18:24:25 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/05 16:01:44 by vgosset          ###   ########.fr       */
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
	{
		ft_putchar('1');
		return (ft_error());
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putchar('2');
		return (ft_error());
	}
	cpt = ft_read(fd);
	if (cpt == 0)
	{
		ft_putchar('3');
		return (ft_error());
	}
	if (close(fd) == -1)
	{
		ft_putchar('4');
		return (ft_error());
	}
	fd = open(argv[1], O_RDONLY);
	printf("%d\n", 1);
	tab = ft_readtoplace(fd, cpt);
	res = ft_res_tab(tab, cpt);
	ft_display(res);
	return (0);
}
