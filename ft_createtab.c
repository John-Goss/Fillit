/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 12:21:46 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/16 18:51:17 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
char	**ft_placebuf(char *buf, int i, t_tetri **tab)
{
}

t_tetri	**ft_createtab(size_t cpt)
{
	t_tetri	**tab;

	tab = ((t_tetri **)malloc(sizeof(t_tetri) * cpt + 1);
	if (tab == NULL)
	{
		ft_putendl("error");
		return (NULL);
	}
	return (tab);
}
