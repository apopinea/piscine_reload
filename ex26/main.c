/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 17:58:44 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_count_if(char **tab, int (*f)(char*));

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_test(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'l')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**tab;

	if (argc > 1)
	{
		if (!(tab = (char**)malloc(sizeof(char*) * argc)))
			return (0);
		i = -1;
		while (++i < argc - 1)
			tab[i] = argv[i + 1];
		tab[i] = 0;
		ft_putnbr(ft_count_if(argv, &ft_test));
	}
	else
		ft_putstr("Erreur, au mois un argument.\n");
	return (0);
}
