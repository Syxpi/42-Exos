/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:53:55 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 19:05:23 by lclerel-         ###   ########.fr       */
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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5;
	write(1, "Avant : ", 8);
	ft_putnbr(a);
	write(1, " et ", 4);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_ultimate_div_mod(&a, &b);
	write(1, "Apres (Div) : ", 14);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "Apres (Mod) : ", 14);
	ft_putnbr(b);
	write(1, "\n", 1);
	return (0);
}*/
