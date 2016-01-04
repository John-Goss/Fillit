/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtoplace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 13:35:44 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 19:56:24 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_replacechar(char *buf, char c, char d)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == c)
			buf[i] = d;
		i++;
	}
	return (buf);
}

t_tetri	**ft_readtoplace(int fd, size_t cpt)
{
	int		ret;
	char	buf[21];
	char	buf2[2];
	int		i;
	t_tetri	**tab;

	i = 0;
	tab = ft_createtab(tab, cpt);
	while ((ret = read(fd, buf, 20)) > 0)
	{
		buf[20] = '\0';
		buf = ft_replacechar(buf, '\n', '\0');
		tab[i] = ft_placebuf(buf, i);
		i++;
		read(fd, buf2, 1);
	}
	return (tab);
}
