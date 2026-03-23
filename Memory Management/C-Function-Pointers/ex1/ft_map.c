/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 09:41:12 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/17 11:36:53 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab2;

	tab2 = malloc(sizeof(int) * length);
	i = 0;
	if (!tab2)
	{
		return (NULL);
	}
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
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

int	ft_carre(int n)
{
	return (n * n);
}

int	main(void)
{
	int     tab[4] = {1, 8, 9, 6};
	int     *result = ft_map(tab, 4, &ft_carre);
	int	i;
	int	length;

	i = 0;
	length = 4;

	write(1, "Test avec tableau de 4, avec valeur 1 8 9 6 : ", 46);
	write(1, "\n", 1);
	while (i < length)
	{
		ft_putnbr(result[i]);
		i++;
		write(1, "\n", 1);
	}
}*/
