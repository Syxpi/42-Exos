/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:29:41 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/17 11:37:55 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	s_check(char *s)
{
	int	i = 0;

	while (s[i] == 'S')
	{
		return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*tab[] = {"Test", "1234", "Test56", "singesavant", NULL};
	int		result;

	result = ft_any(tab, &s_check);
	if (result == 1)
	{
		write(1, "Un mot a ete trouver\n", 22);
	}
	else
	{
		write(1, "Rien trouver.\n", 14);
	}
	return (0);
}*/
