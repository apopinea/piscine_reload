/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 17:43:06 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	void	(*f)(int);
	int		i;
	int		*tab;

	if (argc > 1)
	{
		if (!(tab = (int*)malloc(sizeof(int) * argc)))
			return (0);
		i = 0;
		while (++i < argc)
			tab[i - 1] = ft_atoi(argv[i]);
		f = ft_putnbr;
		ft_foreach(tab, argc - 1, f);
	}
	else
		ft_putstr("Erreur, au mois un argument.\n");
	return (0);
}
