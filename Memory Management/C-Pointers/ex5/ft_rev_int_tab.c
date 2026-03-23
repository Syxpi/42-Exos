/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:08:40 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 19:23:29 by lclerel-         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	last;

	i = 0;
	last = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[last];
		tab[last] = temp;
		i++;
		last--;
	}
}

/*int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;
	write(1, "Avant : 1, 2, 3, 4, 5", 22);
	ft_rev_int_tab(tab, size);
	write(1, "\n", 1);
	write(1, "Apres : ", 8);
	ft_putnbr(tab[0]);
	write(1, ", ", 2);
	ft_putnbr(tab[1]);
	write(1, ", ", 2);
	ft_putnbr(tab[2]);
	write(1, ", ", 2);
	ft_putnbr(tab[3]);
	write(1, ", ", 2);
	ft_putnbr(tab[4]);
	write(1, "\n", 1);
	return (0);
}*/
