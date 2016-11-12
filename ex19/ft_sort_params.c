/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apopinea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:28:20 by apopinea          #+#    #+#             */
/*   Updated: 2016/11/03 14:43:10 by apopinea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		if (!s1[i++])
			return (0);
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			j = i;
			while (++j < argc)
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					argv[0] = argv[i];
					argv[i] = argv[j];
					argv[j] = argv[0];
				}
		}
		ft_print_params(argc, argv);
	}
	return (0);
}
