/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:31:41 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/05 14:38:04 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_read(int fd)
{
	int		ret;
	char	buf[21];
	char	buf2[2];
	int		cpt;
	int		ret2;

	cpt = 0;
	while ((ret = read(fd, buf, 20)) > 0)
	{
		if (!ft_checkbuf(buf))
			return (0);
		if ((ret2 = read(fd, buf2, 1)) == 1 && buf2[0] != '\n')
			return (0);
		cpt++;
	}
	if (ret2 != 0)
		return (0);
	return (cpt);
}
