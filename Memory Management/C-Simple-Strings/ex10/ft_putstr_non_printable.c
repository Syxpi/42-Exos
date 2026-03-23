/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:05:58 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/10 17:17:53 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &base[(unsigned char)str[i] / 16], 1);
			write(1, &base[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\nLumi\n:3É");
	return (0);
}
