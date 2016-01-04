/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resfillit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 14:31:14 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/04 19:23:30 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete_tetri(int i, int j, char **res, t_tetri *tab)
{
	int	k;
	int	l;

	k = 0;
	while (k < tab->height)
	{
		l = 0;
		while (l < tab->large)
		{
			if (tab->form[k][l] == tab->letter)
				res[i + k][j + l] = '.';
			l++;
		}
		k++;
	}
}

void	ft_place_tetri(int i, int j, char **res, t_tetri *tab)
{
	int	k;
	int	l;

	k = 0;
	while (k < tab->height)
	{
		l = 0;
		while (l < tab->large)
		{
			if (tab->form[k][l] == tab->letter)
				res[i + k][j + l] = tab->letter;
			l++;
		}
		k++;
	}
}

int		ft_check_place(int i, int j, char **res, t_tetri *tab)
{
	int	k;
	int	l;

	k = 0;
	while (k < tab->height)
	{
		l = 0;
		while (l < tab->large)
		{
			if (tab->form[k][l] == tab->letter && res[i + k][j + l] != '.')
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

int		ft_fill_square(char **res, t_tetri **tab, int size, int n)
{
	int	i;
	int	j;

	i = 0;
	if (tab[n] == NULL)
		return (1);
	while ((i + tab[n]->height) <= size)
	{
		j = 0;
		while ((j + tab[n]->large) <= size)
		{
			if (ft_check_place(i, j, res, tab[n]))
			{
				ft_place_tetri(i, j, res, tab[n]);
				if (!(ft_fill_square(res, tab, size, n + 1)))
					ft_delete_tetri(i, j, tab, tab[n]);
				else
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
