/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:36:15 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 17:46:32 by lclerel-         ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 9;
	write(1, "Avant - a: ", 11);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "Avant - b: ", 11);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	write(1, "\n", 1);
	write(1, "Apres - a: ", 11);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "Apres - b: ", 11);
	ft_putnbr(b);
	write(1, "\n", 1);
	return (0);
}*/
