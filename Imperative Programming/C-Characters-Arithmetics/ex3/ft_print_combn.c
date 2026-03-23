/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:08:08 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/05 19:08:53 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_tab(int *tab, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (tab[0] != (10 - n))
	{
		write(1, ", ", 2);
	}
}

void	ft_recursive(int *tab, int n, int pos, int start)
{
	int	i;

	if (pos == n)
	{
		ft_put_tab(tab, n);
		return ;
	}
	i = start;
	while (i <= 9)
	{
		tab[pos] = i;
		ft_recursive(tab, n, pos + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n > 0 && n < 10)
	{
		ft_recursive(tab, n, 0, 0);
	}
}

/*int	main(void)
{
	write(1, "Test n = 2 :\n", 13);
	ft_print_combn(2);
	write(1, "\n\n", 2);
	write(1, "Test n = 3 :\n", 13);
	ft_print_combn(3);
	write(1, "\n\n", 2);
	write(1, "Test n = 9 :\n", 13);
	ft_print_combn(9);
	write(1, "\n\n", 2);
}*/
