/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:54:32 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/19 11:56:49 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!tab || !f)
	{
		return (0);
	}
	while (i < length)
	{
		if (f(tab[i]) != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

/*int	len_check(char *s)
{
	int	i = 0;

	while (s[i])
	{
		i++;
	}
	if (i > 3)
	{
		return (1);
	}
	return (0);
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
	char	*tab[] = {"Test", "1234", "Test56", "singesavant", NULL};
	int		result;
	int		length = 0;

	while (tab[length] != NULL)
	{
		length++;
	}
	result = ft_count_if(tab, length, &len_check);
	if (result > 1)
	{
		write(1, "Plusieurs mots ont ete trouver\n", 31);
		write(1, "Nombre Total : ", 15);
		ft_putnbr(result);
	}
	else
	{
		write(1, "Rien trouver.\n", 14);
	}
	return (0);
}*/
