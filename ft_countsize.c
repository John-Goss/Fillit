/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:32:20 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/16 18:47:09 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_countheight(t_tetri *tab)
{
	int		l;
	int		c;
	size_t	height;

	l = 0;
	c = 0;
	height = 0;
	while (tab[l][c])
	{
		while (c < 4)
		{
			if (tab[l][c] == tab->letter)
			{
				height++;
				l++;
				c = -1;
			}
			c++;
		}
		l++;
		c = 0;
	}
	tab->height = height;
}

void	ft_countlarge(t_tetri *tab)
{
	int		l;
	int		c;
	size_t	large;

	l = 0;
	c = 0;
	large = 0;
	while (tab[l][c])
	{
		while (l < 4)
		{
			if (tab[l][c] == tab->letter)
			{
				large++;
				c++;
				l = -1;
			}
			l++;
		}
		c++;
		l = 0;
	}
	tab->large = large;
}
