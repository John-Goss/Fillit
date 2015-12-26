/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resfillit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 15:28:59 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/18 14:23:52 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_resfillit(t_tetri **tab, char **res)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab)
	{
		if (res[i][j] == '.')
			res = tab->form[i];
		else (ft_resfillit(tab, res + 1));
		tab->form[++i];
	}
}
