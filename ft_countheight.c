/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countheight.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:12:16 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/16 12:39:35 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_countheight(t_tetri **tab, size_t j)
{
	size_t i;
	size_t cptl;
	size_t cptl;

	i = 0;
	cptl = 0;
	cpt = 0;
	while (tab[j][i])
	{
		if (tab[j][i] == '#')
		{
			cptl++
			while (tab[j][i + 5] && tab[j][i + 5] == '#')
			{
				cptl++;
				i = i + 5;
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
