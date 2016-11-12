/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:01:30 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 15:08:50 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (max - min <= 0)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = -1;
	while (min + ++i < max)
		tab[i] = min + i;
	return (tab);
}
