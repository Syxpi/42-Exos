/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:38:54 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/17 11:36:19 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))

{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putnbr(int nb)
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
}

int	main(void)
{
	int     tab[4] = {1, 8, 9, 6};
	int	i;
	int	length;
	i = 0;
	length = 4;

	write(1, "Test avec tableau de 4, avec valeur 1 8 9 6 : ", 46);
	write(1, "\n", 1);
	while (i < length)
	{
		ft_putnbr(tab[i]);
		i++;
		write(1, "\n", 1);
	}
}*/
