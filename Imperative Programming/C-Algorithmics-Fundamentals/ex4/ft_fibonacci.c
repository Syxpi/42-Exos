/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:48:57 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 13:09:29 by lclerel-         ###   ########.fr       */
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

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(void)
{
	int		nb;

	write(1, "Test avec index de 5:", 22);
	write(1, "\n", 1);
	nb = ft_fibonacci(5);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec index de 10:", 23);
	write(1, "\n", 1);
	nb = ft_fibonacci(10);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec index de -1:", 23);
	write(1, "\n", 1);
	nb = ft_fibonacci(-1);
	ft_putnbr(nb);
	write(1, "\n", 1);
	write(1, "Test avec index de 30:", 23);
        write(1, "\n", 1);
        nb = ft_fibonacci(30);
        ft_putnbr(nb);
        write(1, "\n", 1);
	return (0);
}*/
