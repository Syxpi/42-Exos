/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:07:45 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/19 19:23:18 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
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
	int	size;
	// Integers pour les errors
	int	max_err = 2;
        int	min_err = 9;
        int	*tab_err;
        int	size_err;
	// Integers pour le 3eme Test
	int	max2 = -5;
	int	min2 = -1;
	int	*tab2;
	int	size2;
	size_err = ft_ultimate_range(&tab_err ,min_err, max_err);
	size = ft_ultimate_range(&tab, min, max);
	size2 = ft_ultimate_range(&tab2, min2, max2);
	if (size == -1)
	{
		return (1);
	}
	// Test 1, Test Min 2 Max 10.
	write(1, "/~~~Test 1~~~\\ \n", 16);
        write(1, "> Min : ", 8);
        ft_putnbr(min);
        write(1, " <\n> Max : ", 11);
        ft_putnbr(max);
        write(1, " <\n> Resultat : ", 17);
        ft_putnbr(size);
        write(1, " <\n\\~~~Test 1~~~/", 18);
	ft_putchar('\n');
	// Test 2, Test Min 9 Max 2 (Return Error)
	write(1, "/~~~Test 2~~~\\ \n", 16);
        write(1, "> Min : ", 8);
        ft_putnbr(min_err);
        write(1, " <\n> Max : ", 11);
        ft_putnbr(max_err);
        write(1, " <\n> Resultat : ", 17);
        ft_putnbr(size_err);
        write(1, " <\n\\~~~Test 2~~~/", 18);
	ft_putchar('\n');
	// Test 3, Test Min -1 Max -5.
        write(1, "/~~~Test 3~~~\\ \n", 16);
        write(1, "> Min : ", 8);
        ft_putnbr(min2);
        write(1, " <\n> Max : ", 11);
        ft_putnbr(max2);
	write(1, " <\n> Resultat : ", 17);
	ft_putnbr(size2);
        write(1, " <\n\\~~~Test 3~~~/", 18);
        ft_putchar('\n');
	free(tab);
}*/
