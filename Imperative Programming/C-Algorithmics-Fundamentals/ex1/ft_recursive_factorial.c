/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 09:57:06 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 13:09:08 by lclerel-         ###   ########.fr       */
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

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

/*int	main(void)
{
	int		nb;

	write(1, "Test avec factoriel de 5:", 25);
	write(1, "\n", 1);
	nb = ft_recursive_factorial(5);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec factoriel de 10:", 26);
	write(1, "\n", 1);
	nb = ft_recursive_factorial(10);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec factoriel de 20:", 26);
	write(1, "\n", 1);
	nb = ft_recursive_factorial(20);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "(20 depasse l'int limit, resultat negatif)", 42);
	write(1, "\n", 1);
	write(1, "Test avec factoriel de 0:", 25);
	write(1, "\n", 1);
	nb = ft_recursive_factorial(0);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec aucune factoriel:", 27);
	write(1, "\n", 1);
	nb = ft_recursive_factorial(-14);
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}*/
