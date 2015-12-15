/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:35:50 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/10 13:11:44 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c1;
	size_t	c2;
	size_t	i;
	size_t	j;
	char	*str;

	c1 = ft_strlen(s1);
	c2 = ft_strlen(s2);
	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(str) * (c1 + c2 + 1));
	while (s1[i])
	{
		str[i] = ((char *)s1)[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = ((char *)s2)[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
