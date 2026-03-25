/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:44:05 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/25 16:39:44 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
/*
int	main(void)
{
	char	*s1 = "Lumi";
	char	*s2 = "Lumi";
	char	*s3 = "LumX";
	char	*rdmvar = "Pasteque";
	char	*nullvar = "NULL";
	// Test 1
	write(1, "Test avec s1 (", 14);
	ft_putstr(s1);
	write(1, ") et s2 (", 9);
	ft_putstr(s2);
	write(1, ") : \n", 5);
	if (ft_strcmp(s1, s2) == 0)
		write(1, "Test 1 : OK :3", 14);
	else
		write(1, "Test 1 : Not OK :(", 18);
	ft_putchar('\n');
	// Test 2
	write(1, "Test avec s1 (", 14);
	ft_putstr(s1);
	write(1, ") et s3 (", 9);
	ft_putstr(s3);
	write(1, ") : \n", 5);
	if (ft_strcmp(s1, s3) == 0)
		write(1, "Test 2 : OK :3", 14);
	else
		write(1, "Test 2 : Not OK :(", 18);
	ft_putchar('\n');
	// Test 3
	write(1, "Test avec NULLVAR (", 19);
	ft_putstr(nullvar);
	write(1, ") et rdmvar (", 13);
	ft_putstr(rdmvar);
	write(1, ") : \n", 5);
	if (ft_strcmp(nullvar, rdmvar) == 0)
		write(1, "Test 3 : OK :3", 14);
	else
		write(1, "Test 3 : Not OK :(", 18);
	ft_putchar('\n');
	return (0);
}
*/