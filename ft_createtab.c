/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 19:59:20 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/05 11:17:44 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_placebuf(char *buf, int i)
{
	int		j;
	int		line;
	t_tetri	*newpiece;

	j = 0;
	line = 0;
	if (!(newpiece = (t_tetri*)malloc(sizeof(*newpiece))))
		return (NULL);
	while (j <= 20)
	{
		ft_strncpy(newpiece->form[line], buf + j, 5);
		ft_replacechar(newpiece->form[line], '#', 'A' + i);
		j = j + 5;
		line++;
	}
	newpiece->letter = 'A' + i;
	newpiece->height = ft_countheight(newpiece->form, i);
	newpiece->large = ft_countlarge(newpiece->form, i);
	ft_replacetop(newpiece);
	ft_replaceleft(newpiece);
	return (newpiece);
}

t_tetri	**ft_createtab(size_t cpt)
{
	t_tetri	**tab;

	if (!(tab = (t_tetri **)malloc(sizeof(t_tetri) * (cpt + 1))))
		return (NULL);
	tab[cpt] = NULL;
	return (tab);
}
