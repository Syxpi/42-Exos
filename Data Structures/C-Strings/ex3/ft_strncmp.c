/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:44:05 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/24 15:55:40 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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

void	ft_putchar(char chara)
{
	write(1, &chara, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char	*s1 = "Lumiere";
	char	*s2 = "Luminescense";
	char	*s3 = "Lumi";
	char	*rdmvar = "Pasteque";
	char	*nullvar = "NULL";
	int		val;
	// Test 1
	val = 4;
	write(1, "Test avec s1 (", 14);
	ft_putstr(s1);
	write(1, ") et s2 (", 9);
	ft_putstr(s2);
	write(1, ") de valeur ", 13);
	ft_putnbr(val);
	write(1, ": \n", 3);
	if (ft_strncmp(s1, s2, val) == 0)
		write(1, "Test 1 : OK :3", 14);
	else
		write(1, "Test 1 : Not OK :(", 18);
	ft_putchar('\n');
	// Test 2
	val = 5;
	write(1, "Test avec s1 (", 14);
	ft_putstr(s1);
	write(1, ") et s2 (", 9);
	ft_putstr(s2);
	write(1, ") de valeur ", 13);
	ft_putnbr(val);
	write(1, ": \n", 3);
	if (ft_strncmp(s1, s2, val) == 0)
		write(1, "Test 2 : OK :3", 14);
	else
		write(1, "Test 2 : Not OK :(", 18);
	ft_putchar('\n');
	// Test 3
	val = 3;
	write(1, "Test avec s1 (", 14);
	ft_putstr(s1);
	write(1, ") et s3 (", 9);
	ft_putstr(s3);
	write(1, ") de valeur ", 13);
	ft_putnbr(val);
	write(1, ": \n", 3);
	if (ft_strncmp(nullvar, rdmvar, val) == 0)
		write(1, "Test 3 : OK :3", 14);
	else
		write(1, "Test 3 : Not OK :(", 18);
	ft_putchar('\n');
	// Test 4
	val = 3;
	write(1, "Test avec NULLVAR (", 19);
	ft_putstr(nullvar);
	write(1, ") et rdmvar (", 13);
	ft_putstr(rdmvar);
	write(1, ") de valeur ", 13);
	ft_putnbr(val);
	write(1, ": \n", 3);
	if (ft_strncmp(nullvar, rdmvar, val) == 0)
		write(1, "Test 4 : OK :3", 14);
	else
		write(1, "Test 4 : Not OK :(", 18);
	ft_putchar('\n');
	return (0);
}*/
