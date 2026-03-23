/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:01:47 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/17 11:39:02 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cs;
	int	ds;

	i = 0;
	cs = 1;
	ds = 1;
	if (length <= 1)
	{
		return (1);
	}
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			cs = 0;
		}
		if (f(tab[i], tab[i + 1]) < 0)
		{
			ds = 0;
		}
		i++;
	}
	return (cs || ds);
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

int	ft_compare(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int croiss[] = {1, 2, 3, 4, 5, 6, 6, 7};
	int decroiss[] = {7, 6, 6, 5, 4, 3, 2, 1};
	int pas_trie[] = {1, 2, 3, 5, 6, 7, 6, 9};
	int	neg[] = {-1, -12, 11, -19};

	write(1, "Test Croissant > (1, 2, 3, 4, 5, 6, 6, 7) : ", 44);
	if (ft_is_sort(croiss, 8, &ft_compare) == 1)
		write(1, "Ok :3 (Trié)\n", 14);
	else
		write(1, "Not ok (Pas trié)\n", 19);

	// Test 2 : Décroissant
	write(1, "Test Decroissant > (7, 6, 6, 5, 4, 3, 2, 1) : ", 46);
	if (ft_is_sort(decroiss, 8, &ft_compare) == 1)
		write(1, "Ok :3 (Trié)\n", 14);
	else
		write(1, "Not ok (Pas trié)\n", 19);

	// Test 3 : Pas trié
	write(1, "Test Pas trier > (1, 2, 3, 5, 6, 7, 6, 9) : ", 44);
	if (ft_is_sort(pas_trie, 8, &ft_compare) == 1)
		write(1, "Ok :3 (Trié)\n", 14);
	else
		write(1, "Not ok (Pas trié)\n", 19);

	// Test 4 : Negatif
	write(1, "Test avec negatif > (-1, -12, 11, -19) : ", 42);
	if (ft_is_sort(neg, 4, &ft_compare) == 1)
		write(1, "Ok :3 (Trié)\n", 14);
	else
		write(1, "Not ok (Pas trié)\n", 19);
	return (0);
}*/
