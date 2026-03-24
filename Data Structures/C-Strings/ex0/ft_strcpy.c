/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:24:04 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/24 18:38:10 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char 	src[] = "Salut, je suis Lumi :3";
	char	dst[20];
	int		i = 0;

	ft_strcpy(dst, src);
	while (dst[i])
	{
		write(1, &dst[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
