/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:00:07 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/04 13:38:18 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i1;
	size_t i2;
	size_t t;

	i1 = 0;
	i2 = 0;
	t = ft_strlen((char *)s2);
	if (t > n)
		return (NULL);
	if (s2[i2] == '\0')
		return ((char *)s1);
	while (s1[i1])
	{
		while (s1[i1] == s2[i2] && n > i1)
		{
			if (s2[i2 + 1] == '\0' || i2 + 1 == n)
				return ((char *)&s1[i1 - i2]);
			i1++;
			i2++;
		}
		i1 = i1 - i2 + 1;
		i2 = 0;
	}
	return (NULL);
}
