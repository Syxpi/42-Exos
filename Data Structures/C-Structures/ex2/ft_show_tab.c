/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 01:13:18 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/26 01:40:26 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

char    *ft_strdup(char *src)
{
        int             i;
        int             len;
        char    *dst;

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

struct  s_stock_str     *ft_strs_to_tab(int ac, char **av)
{
        t_stock_str     *tab;
        int                     i;

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

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	
	tab = ft_strs_to_tab(argc, argv);
	if (!tab)
		return (1);
	ft_show_tab(tab);
	return (0);
}*/
