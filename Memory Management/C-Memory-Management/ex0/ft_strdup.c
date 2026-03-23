/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:01:43 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/23 10:11:54 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

/*void    ft_putchar(char chara)
{
        write(1, &chara, 1);
}

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                ft_putchar(str[i]);
                i++;
        }
}

int	main(void)
{
	char	*dest;

	dest = ft_strdup(NULL);
	
	if (dest == NULL)
	{
		return (1);
	}
	ft_putstr(dest);
	free(dest);
}*/
