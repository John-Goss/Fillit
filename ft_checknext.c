/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 17:23:01 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/14 17:55:59 by vgosset          ###   ########.fr       */
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
			if (buf[i - 1] == '#')
				cpt++;
			if (buf[i - 5] == '#')
				cpt++;
			if (buf[i + 1] == '#')
				cpt++;
			if (buf[i + 5] == '#')
				cpt++;
		}
	}
	if (cpt != 6 || cpt != 8)
		return (0);
	return (1);
}
