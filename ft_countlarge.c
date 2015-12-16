/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countlarge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:37:55 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/16 14:07:05 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_countlarge(t_tetri **tab, size_t j)
{
	size_t i;
	size_t cptl;
	size_t cpt;

	i = 0;
	cpth = 0;
	cpt = 0;
	while (tab[j][i])
	{
		if (tab[j][i] == '#')
			cptl++;
		if (tab[j][i] == '\n')
		{
			if (cpt < cptl)
				cpt = cptl;
			cptl = 0;
		}
	i++;
	}
	return (cpt);
}
