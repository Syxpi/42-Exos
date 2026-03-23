/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:20:07 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/19 11:36:19 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);

int		ft_strlen(char *str);

int		ft_nbrlen(long nbr, int base_size);

int		check_base(char *base);

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i])
	{
		if (str[i] && ft_index(str[i], base) != -1)
		{
			res = (res * ft_strlen(base)) + ft_index(str[i], base);
			i++;
		}
	}
	return (res * sign);
}

void	ft_populate_res(char *res, long n, char *base_to, int size)
{
	int	base_len;

	base_len = ft_strlen(base_to);
	res[size] = '\0';
	if (n == 0)
		res[0] = base_to[0];
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[size - 1] = base_to[n % base_len];
		n /= base_len;
		size--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	char	*res;
	int		size;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	size = ft_nbrlen(n, ft_strlen(base_to));
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	ft_populate_res(res, n, base_to, size);
	return (res);
}

int	main(void)
{
	char	*result;
	char	*hex;
	char	*bin;
	char	*dec;
	char	*vif;

	hex = "0123456789abcdef";
	dec = "0123456789";
	bin = "01";
	vif = "poneyvif";
	// Test 1 : 42 > Dec to Bin
	ft_putstr("Test avec 42 | ");
	ft_putstr("Base From : Decimal (Base 10), Base To : Binary (Base 2)");
	write(1, "\n", 1);
	result = ft_convert_base("42", dec, bin);
	if (result == NULL)
	{
		write(1, "Erreur.", 7);
	}
	ft_putstr("Resultat : ");
	ft_putstr(result);
	write(1, "\n", 1);
	free(result);
	// Test 2 : 2a (42) > Hex to Vif
	ft_putstr("Test avec 42 (2a) | ");
	ft_putstr("Base From : Hexadecimal (Base 16), Base To : poneyvif (Base 8)");
	write(1, "\n", 1);
	result = ft_convert_base("2a", hex, vif);
	if (result == NULL)
	{
		write(1, "Erreur.", 7);
	}
	ft_putstr("Resultat : ");
	ft_putstr(result);
	write(1, "\n", 1);
	free(result);
	// Test 3 : 0 > Dec to Bin
	ft_putstr("Test avec 0 | ");
	ft_putstr("Base From : Decimal (Base 10), Base To : Binary (Base 2)");
	write(1, "\n", 1);
	result = ft_convert_base("0", dec, bin);
	if (result == NULL)
	{
		write(1, "Erreur.", 7);
	}
	ft_putstr("Resultat : ");
	ft_putstr(result);
	write(1, "\n", 1);
	free(result);
	// Test 4 : -2147483648 > Dec to Hex
	ft_putstr("Test avec -2147483648 | ");
	ft_putstr("Base From : Decimal (Base 10), Base To : Hexadecimal (Base 16)");
	write(1, "\n", 1);
	result = ft_convert_base("-2147483648", dec, hex);
	if (result == NULL)
	{
		write(1, "Erreur.", 7);
	}
	ft_putstr("Resultat : ");
	ft_putstr(result);
	write(1, "\n", 1);
	free(result);
	// Test 5 : Bordel Ultime > Binary to Dec
	ft_putstr("Test avec ---+--101010 | ");
	ft_putstr("Base From : Binary (Base 2), Base To : Decimal (Base 10)");
	write(1, "\n", 1);
	result = ft_convert_base(" ---+--101010", bin, dec);
	if (result == NULL)
	{
		write(1, "Erreur.", 7);
	}
	ft_putstr("Resultat : ");
	ft_putstr(result);
	write(1, "\n", 1);
	free(result);
	// Test 6 : NULL > Binary to Dec
	// ft_putstr("Test avec NULL | ");
	ft_putstr("Base From : Binary (Base 2), Base To : Decimal (Base 10)");
	write(1, "\n", 1);
	result = ft_convert_base(NULL, bin, dec);
	if (result == NULL)
	{
		write(1, "Erreur. NULL est mis comme variable", 35);
		write(1, "\n", 1);
	}
	else
	{
		ft_putstr("Resultat : ");
		ft_putstr(result);
		write(1, "\n", 1);
		free(result);
	}
	return (0);
}
