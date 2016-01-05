/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replaceform.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 13:32:34 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/05 13:16:11 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_replacetop(t_tetri *tab)
{
	int h;

	h = 0;
	while (ft_strchr(tab->form[h], tab->letter) == NULL)
	{
		while (h + 1 < 4)
		{
			ft_strncpy(tab->form[h], tab->form[h + 1], 4);
			h++;
		}
		ft_strcpy(tab->form[h], "....");
		h = 0;
	}
}

void	ft_replaceleft(t_tetri *tab)
{
	int i;

	i = 0;
	while (42)
	{
		if (tab->form[i][0] != tab->letter)
			i++;
		else
			break ;
		if (i == 4)
		{
			ft_moveleft(tab);
			i = 0;
		}
	}
}

void	ft_moveleft(t_tetri *tab)
{
	int		i;
	int		j;

	j = 0;
	while (j + 1 < 4)
	{
		i = 0;
		while (i < 4)
		{
			tab->form[i][j] = tab->form[i][j + 1];
			if (j + 1 == 3)
				tab->form[i][j + 1] = '.';
			i++;
		}
		j++;
	}
}
