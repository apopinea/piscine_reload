/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:51:53 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 13:20:47 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

void	ft_putchar(char c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int a;
	int res;

	if (argc == 2)
	{
		a = ft_atoi(argv[1]);
		res = ft_recursive_factorial(a);
		ft_putnbr(a);
		ft_putstr("! = ");
		ft_putnbr(res);
		ft_putchar('\n');
	}
	else
		ft_putstr("Erreur, 1 argument.\n");
	return (0);
}
