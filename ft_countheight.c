/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countheight.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:12:16 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/16 16:09:17 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_countheight(t_tetri *tab)
{
	size_t l;
	size_t c;
	size_t cptl;
	size_t cptl;

	l = 0;
	c = 0;
	cptl = 0;
	cpt = 0;
	while (tab[l][c])
	{
		if (tab[l][c] == '#')
		{
			cptl++
			while (tab[l + 1][c] && tab[l + 1][c] == '#')
			{
				cptl++;
				l++;
			}
		if (cpt < cptl)
			cpt = cptl
		i = i - ((cptl - 1) * 5)
		cptl = 0;
		}
		i++;
	}
	return (cpt);
}
