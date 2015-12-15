/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:57:21 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/07 11:48:07 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*source;
	char		*dsti;
	char		*tp;

	source = (char *)src;
	dsti = dst;
	i = 0;
	tp = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		tp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dsti[i] = tp[i];
		i++;
	}
	return (dsti);
}
