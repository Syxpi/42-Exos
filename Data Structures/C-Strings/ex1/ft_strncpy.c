/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:35:37 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/24 12:55:02 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int	size = 30;
	char 	src[] = "Salut, je suis Lumi :3";
	char	dst[30] = {0};
	int		i = 0;
	
	ft_strncpy(dst, src, size);
	while (dst[i])
	{
		write(1, &dst[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
