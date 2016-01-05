/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbuf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 17:14:36 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/05 12:49:13 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkbuf(char *buf)
{
	int i;
	int cpt;

	cpt = 0;
	i = 0;
	while (i < 20)
	{
		if ((i + 1) % 5 == 0)
		{
			if (buf[i] != '\n')
				return (0);
		}
		else if (buf[i] != '.' && buf[i] != '#')
		{
			printf("%d %c", i, buf[i]);
			return (0);
		}
		if (buf[i] == '#')
			cpt++;
		i++;
	}
	if (cpt != 4)
		return (0);
	return (ft_checknext(buf));
}
