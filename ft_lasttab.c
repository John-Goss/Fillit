/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lasttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 13:34:57 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/18 14:53:22 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_lasttab(cpt)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * cpt);
	if (res == NULL)
		return (NULL);
	while (res[i])
	{
		res[i] = (char *)malloc(sizeof(char) * 5);
		i++;
	}
	ft_init_tab(res);
	return (res);
}

char	**ft_init_tab(char **res)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (res)
	{
		while (res[i][j])
		{
			res[i][j] = '.';
			j++;
		}
		i++;
	}
	res[i][j] = '\0';
	return (res);
}
