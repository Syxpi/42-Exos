/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 22:54:18 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/26 02:07:14 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = av[i];
	return (tab);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	if (src == NULL)
		return (NULL);
	while (src[len])
		len++;
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
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

void	ft_stylebox(int n)
{
	while (n > 0)
	{
		write(1, " ", 1);
		n--;
	}
}

int	ft_nbrlen(int nb)
{
	int	len;

	len = 1;
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int		i;
	int		spaces;

	tab = ft_strs_to_tab(argc, argv);

	if (!tab)
		return (1);

	i = 0;

	while (tab[i].str != 0)
	{
		// Oui, cela ne sers a rien. A RIEN.
		// mais c pour faire waw. et si sa te plait pas, bah...
		// DARK MOULINETTE VA TE FAIRE DU SALE MON GARS !
		// - Lumi, 26 Mars 2026, 0h24. Entrain de sombrer dans la folie.
		ft_putstr("/==========================\\\n");
		ft_putstr("|        Taille :          |\n");
		ft_putstr("| > ");
		ft_putnbr(tab[i].size);
		spaces = 27 - 4 - ft_nbrlen(tab[i].size);
		ft_stylebox(spaces);
		ft_putstr("|\n");
		ft_putstr("|        String :          |\n");
		ft_putstr("| > ");
        ft_putstr(tab[i].str);
		spaces = 27 - 4 - ft_strlen(tab[i].str);
        ft_stylebox(spaces);
		ft_putstr("|\n");
		ft_putstr("|                          |\n");
		ft_putstr("|        Result :          |\n");
		ft_putstr("| > ");
		ft_putstr(tab[i].copy);
		spaces = 27 - 4 - ft_strlen(tab[i].copy);
        ft_stylebox(spaces);
		ft_putstr("|\n");
		ft_putstr("\\==========================/\n\n");
		i++;
	}
	return (0);
}
