/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:17:40 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/07 11:32:09 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	if (src && dst)
	{
		ft_memset(dst, '\0', n);
		while (n > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
			n--;
		}
	}
	return (dst);
}
