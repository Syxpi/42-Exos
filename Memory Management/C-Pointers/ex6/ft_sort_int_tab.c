/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:24:29 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 19:34:56 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nb)
{
	char	value;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	value = nb % 10 + '0';
	write(1, &value, 1);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	changed;

	changed = 1;
	while (changed)
	{
		changed = 0;
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				changed = 1;
			}
			i++;
		}
	}
}

/*int	main(void)
{
	int	tab[] = {5, 1, 4, 2, 8, 9, 3, 7, 6};
	int	size = 9;

	ft_sort_int_tab(tab, size);
	ft_putnbr(tab[0]);
	write(1, ",  ", 2);
	ft_putnbr(tab[1]);
	write(1, ",  ", 2);
	ft_putnbr(tab[2]);
	write(1, ",  ", 2);
	ft_putnbr(tab[3]);
	write(1, ",  ", 2);
	ft_putnbr(tab[4]);
	write(1, ",  ", 2);
	ft_putnbr(tab[5]);
	write(1, ",  ", 2);
	ft_putnbr(tab[6]);
	write(1, ",  ", 2);
	ft_putnbr(tab[7]);
	write(1, ",  ", 2);
	ft_putnbr(tab[8]);
	write(1, "\n ", 1);
	return (0);
}*/
