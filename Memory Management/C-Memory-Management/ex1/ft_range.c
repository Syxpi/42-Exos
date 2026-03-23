/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:44:51 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/23 15:39:50 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
	{
		return (NULL);
	}
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int	*tab;
	int	min = 2;
	int	max = 10;
	int	i = 0;

	// TEST 1 : Cas Normal
	tab = ft_range(min, max);
	write(1, "/~~~Test 1~~~\\\n", 15);
	write(1, "> Min : ", 8);
	ft_putnbr(min);
	write(1, " <\n> Max : ", 11);
	ft_putnbr(max);
	write(1, " <\n> Resultat : ", 16);
	if (!tab)
		write(1, "NULL", 4);
	else
	{
		while (i < (max - min))
		{
			ft_putnbr(tab[i]);
			if (i < (max - min - 1))
				write(1, ", ", 2);
			i++;
		}
	}
	write(1, " <\n\\~~~Test 1~~~/\n\n", 18);
	free(tab);
	// TEST 2 : Cas Erreur (Min > Max)
	int min_err = 9;
	int max_err = 2;
	int *tab_err = ft_range(min_err, max_err);

	write(1, "/~~~Test 2~~~\\\n", 15);
	write(1, "> Min : ", 8);
	ft_putnbr(min_err);
	write(1, " <\n> Max : ", 11);
	ft_putnbr(max_err);
	write(1, " <\n> Resultat : ", 16);
	if (!tab_err)
		write(1, "NULL (OK)", 9);
	else
		write(1, "ERREUR : Devrait etre NULL", 26);
	write(1, " <\n\\~~~Test 2~~~/\n", 18);
	if (tab_err)
		free(tab_err);
	return (0);
}*/
