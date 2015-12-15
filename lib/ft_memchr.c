/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:52:45 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/04 18:17:21 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)s;
	i = 0;
	if (s == NULL)
		return (NULL);
	{
		while (n > 0)
		{
			if (d[i] == (unsigned char)c)
				return (d + i);
			i++;
			n--;
		}
	}
	return (NULL);
}
