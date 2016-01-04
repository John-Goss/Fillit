/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 17:23:01 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 19:26:51 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checknext(char *buf)
{
	int i;
	int cpt;

	cpt = 0;
	i = 0;
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			if (i > 0 && buf[i - 1] == '#')
				cpt++;
			if (i > 4 && buf[i - 5] == '#')
				cpt++;
			if (i < 19 && buf[i + 1] == '#')
				cpt++;
			if (i < 15 && buf[i + 5] == '#')
				cpt++;
		}
		i++;
	}
	if (cpt != 6 && cpt != 8)
		return (0);
	return (cpt);
}
