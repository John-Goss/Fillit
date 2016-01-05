/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:32:20 by jle-quer          #+#    #+#             */
/*   Updated: 2016/01/05 18:28:35 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_countheight(char form[4][5], char a)
{
	int		l;
	int		c;
	size_t	height;

	l = 0;
	c = 0;
	height = 0;
	while (l < 4)
	{
		while (c < 4 && l < 4)
		{
			if (form[l][c] == a)
			{
				height++;
				l++;
				c = -1;
			}
			c++;
		}
		l++;
		c = 0;
	}
	return (height);
}

size_t	ft_countlarge(char form[4][5], char a)
{
	int		l;
	int		c;
	size_t	large;

	l = 0;
	c = 0;
	large = 0;
	while (c < 4)
	{
		while (l < 4 && c < 4)
		{
			if (form[l][c] == a)
			{
				large++;
				c++;
				l = -1;
			}
			l++;
		}
		c++;
		l = 0;
	}
	return (large);
}
