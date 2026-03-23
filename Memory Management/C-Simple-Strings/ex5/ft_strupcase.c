/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:39:09 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/10 13:13:29 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char chara)
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
}*/

char	*ft_strupcase(char *str)
{
	int	i;
	int	is_low;

	i = 0;
	while (str[i] != '\0' )
	{
		is_low = (str[i] >= 'a' && str[i] <= 'z');
		if (is_low)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "LumiTest123";

	write(1, "Test avec LumiTest123 : ", 24);
	write(1, "\n", 1);
	write(1, "Avant : ", 8);
	ft_putstr(str);
	ft_strupcase(str);
	write(1, "\n", 1);
	write(1, "Apres : ", 8);
	ft_putstr(str);
}*/
