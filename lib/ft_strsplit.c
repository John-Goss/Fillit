/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:54:32 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/10 13:11:18 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_strwords(char const *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
		{
			if (str[i + 1] == c || str[i + 1] == '\0')
				j++;
			i++;
		}
	}
	return (j);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	**tab;
	size_t	start;
	size_t	l;

	l = 0;
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_strwords(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i != start)
		{
			tab[l] = ft_strsub(s, start, (i - start));
			l++;
		}
	}
	tab[l] = NULL;
	return (tab);
}
