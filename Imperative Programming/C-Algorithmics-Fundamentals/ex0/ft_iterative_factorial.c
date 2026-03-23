/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:08:57 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 13:07:20 by lclerel-         ###   ########.fr       */
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

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/*int	main(void)
{
	int		nb;

	write(1, "Test avec factoriel de 5:", 25);
	write(1, "\n", 1);
	nb = ft_iterative_factorial(5);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec factoriel de 10:", 26);
	write(1, "\n", 1);
	nb = ft_iterative_factorial(10);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec factoriel de 20:", 26);
	write(1, "\n", 1);
	nb = ft_iterative_factorial(20);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "(20 depasse l'int limit, resultat negatif)", 42);
	write(1, "\n", 1);
	write(1, "Test avec factoriel de 0:", 25);
	write(1, "\n", 1);
	nb = ft_iterative_factorial(0);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec aucune factoriel:", 27);
	write(1, "\n", 1);
	nb = ft_iterative_factorial(-14);
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}*/
