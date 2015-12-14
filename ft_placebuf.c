/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placebuf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 12:09:25 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/14 17:42:52 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		ft_placebuf(char *buf, int l)
{
	size_t i;
	size_t start;

	str = (char *)malloc(sizeof(str) * 5);
	i = 0;
	start = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			form[l] = ft_strsub(buf, start, i);
			start = i;
		}
		i++;
	}
}
