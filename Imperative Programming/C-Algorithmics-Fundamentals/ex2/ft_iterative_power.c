/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:22:48 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 13:09:15 by lclerel-         ###   ########.fr       */
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
}*/

int	ft_iterative_power(int nb, int power)
{
	int		res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/*int	main(void)
{
	int		nb;

	write(1, "Test avec puissance de 5:", 25);
	write(1, "\n", 1);
	nb = ft_iterative_power(5, 5);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec puissance de 10:", 26);
	write(1, "\n", 1);
	nb = ft_iterative_power(10, 10);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec puissance de 20:", 26);
	write(1, "\n", 1);
	nb = ft_iterative_power(20, 20);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "(20 depasse l'int limit, resultat mis a 0)", 42);
	write(1, "\n", 1);
	write(1, "Test avec puissance de 0:", 25);
	write(1, "\n", 1);
	nb = ft_iterative_power(0, 0);
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}*/
