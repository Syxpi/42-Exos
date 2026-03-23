/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:50:01 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/09 17:31:41 by lclerel-         ###   ########.fr       */
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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	a;
	int		*ptr1;

	a = 0;
	ptr1 = &a;

	write(1, "Avant : ", 8);
	ft_putnbr(a);
	write(1, "\n", 1);
	write(1, "Apres : ", 8);
	ft_ft(ptr1);
	ft_putnbr(*ptr1);
	write(1, "\n", 1);
	return (0);
}*/
