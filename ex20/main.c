/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 14:56:36 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strdup(char *src);

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	char *dest;

	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putstr("\n");
		if (!(dest = ft_strdup(argv[1])))
			return (0);
		ft_putstr(dest);
		ft_putchar('\n');
	}
	else
		ft_putstr("Erreur, 1 argument.\n");
	return (0);
}
