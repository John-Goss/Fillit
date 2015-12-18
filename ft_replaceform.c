/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replaceform.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 13:32:34 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/18 14:48:16 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_replacetop(t_tetri *tab)
{
	int h;

	h = 0;
	while (ft_strchr(tab->form[h], tab=>letter) == NULL)
	{
		while (tab->form[h + 1])
		{
			tab->from[h] = tab->form[h + 1];
			h++;
		}
		tab->form[h] = "....\0";
		h = 0;
	}
}

void	ft_replaceleft(t_tetri *tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (
}
