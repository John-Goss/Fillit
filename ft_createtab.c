/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 12:21:46 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/16 18:51:17 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_createtab(int cpt)
{
	char	**tab;

	tab = ((char **)malloc(sizeof(tab) * cpt + 1);
	if (tab == NULL)
	{
		ft_putendl("error");
		return (NULL);
	}
	return (tab);
}
