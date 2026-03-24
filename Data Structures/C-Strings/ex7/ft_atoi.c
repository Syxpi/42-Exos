/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:58:12 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/24 13:23:45 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
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

int	main(void)
{
	int	res;

	// Test 1
	write(1, "/~~~Test 1~~~\\\n", 15);
	write(1, "> Test avec -------+-----101010 : <\n", 36);
	res = ft_atoi(" -------+-----101010");
	if (res == -101010)
		write(1, "> OK. :3 <\n", 11);
	else 
		write(1, "> Not OK :( <\n", 14);
	write(1, "> Resultat retourner : ", 23);
	ft_putnbr(res);
	write(1, " <\n\\~~~Test 1~~~/\n\n", 18);
	// Fin Test 1
	write(1, "\n", 1);
	// Test 2
	write(1, "/~~~Test 2~~~\\\n", 15);
	write(1, "> Test avec NULL : <\n", 21);
	res = ft_atoi("NULL");
	if (res == 1)
		write(1, "> OK. :3 <\n", 11);
	else
		write(1, "> Not OK :( <\n", 14);
	write(1, "> Resultat retourner : ", 23);
	ft_putnbr(res);
	write(1, " <\n\\~~~Test 2~~~/\n", 18);
	// Fin Test 2
	write(1, "\n", 1);
	// Test 3
	write(1, "/~~~Test 3~~~\\\n", 15);
	write(1, "> Test avec 213d6516 : <\n", 25);
	res = ft_atoi("213d6516");
	if (res == 213)
		write(1, "> OK. :3 <\n", 11);
	else
		write(1, "> Not OK :( <\n", 14);
	write(1, "> Resultat retourner : ", 23);
	ft_putnbr(res);
	write(1, " <\n\\~~~Test 3~~~/\n", 18);
	// Fin Test 3
	return (0);
}*/