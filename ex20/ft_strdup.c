/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:47:17 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 14:53:58 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		ln;
	char	*dest;

	ln = ft_strlen(src);
	if (!(dest = (char*)malloc(sizeof(char) * (ln + 1))))
		return (NULL);
	dest[ln] = '\0';
	while (--ln >= 0)
		dest[ln] = src[ln];
	return (dest);
}
