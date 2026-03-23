/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:52:58 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 18:50:17 by lclerel-         ###   ########.fr       */
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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	res_div;
	int	res_mod;

	a = 42;
	b = 5;
	res_div = 0;
	res_mod = 0;
	ft_div_mod(a, b, &res_div, &res_mod);
	write(1, "Division de 42 par 5 :\n", 23);
	write(1, "Quotient : ", 11);
	ft_putnbr(res_div);
	write(1, "\n", 1);
	write(1, "Reste : ", 8);
	ft_putnbr(res_mod);
	write(1, "\n", 1);
}*/
