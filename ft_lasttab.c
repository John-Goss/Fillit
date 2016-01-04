/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lasttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 13:34:57 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/04 18:17:47 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_size_tab(size_t cpt)
{
	size_t	size;

	size = 2;
	while (size * size < (cpt * 4))
		size++;
	return (size);
}

char	**ft_init_last_tab(size_t size)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (size + 1))));
		return (NULL);
	while (i < size)
	{
		if (!(res[i] = (char *)malloc(sizeof(char) * size + 1)));
			return (NULL);
		while (j < size)
			res[i][j++] = '.';
		res[i][j++] = '\0';
		i++;
	}
	res[size] = NULL;
	return (res);
}

char	**ft_res_tab(t_tetri **tab, size_t cpt)
{
	char	**res;
	size_t	size;
	int		i;

	i = 0;
	size = ft_size_tab(cpt);
	res = ft_init_last_tab(size);
	while (!(ft_fill_square(res, tab, size, 0)))
	{
		size++;
		i = 0;
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
		res = ft_init_last_tab(size);
	}
	return (res);
}
