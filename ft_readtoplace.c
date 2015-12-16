/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readtoplace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 13:35:44 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/16 18:51:21 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_readtoplace(int fd, size_t cpt)
{
	int ret;
	char buf[21];
	char buf2[2];
	int i;

	i = 1;
	while ((ret = read(fd, buf, 20)) > 0)
	{
		buf[20] = '\0';
		ft_placebuf(buf, i, tab);
		i++;
		read(fd, buf2, 1);
	}
	return (tab);
}
