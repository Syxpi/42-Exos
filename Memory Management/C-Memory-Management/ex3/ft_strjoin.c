/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 16:37:56 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/19 19:24:56 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total = total + ft_strlen(sep);
		}
		i++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	if (size == 0)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	len = get_total_len(size, strs, sep);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*
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

int	main(void)
{
	char	*tab[5];
	char	*result;
	char	*space;

	tab[0] = "Salut";
	tab[1] = "Je";
	tab[2] = "Suis";
	tab[3] = "Lumi";
	tab[4] = "!";	
	space = " ";
	result = ft_strjoin(5, tab, space);
	if (result)
	{
		ft_putstr(result);
		ft_putstr("\n");
		free(result);
	}
	return (0);
}*/
