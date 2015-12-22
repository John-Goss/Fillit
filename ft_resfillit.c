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

char	**create_last_tab(size_t cpt)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * cpt);
	if (res == NULL)
		return (NULL);
	while (res[i])
	{
		res[i] = (char *)malloc(sizeof(char) * cpt + 1);
		i++;
	}
	if (res == NULL)
		return (NULL);
	return (res);
}

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
		tab->form++i;
	}
}
