/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:59:54 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/10 13:14:35 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char chara)
{
	write(1, &chara, 1);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_low;
	int	is_up;

	i = 0;
	while (str[i] != '\0' )
	{
		is_up = (str[i] >= 'a' && str[i] <= 'z');
		is_low = (str[i] >= 'A' && str[i] <= 'Z');
		if (!(is_up || is_low))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = "LumiTest123";
	write(1, "Test avec LumiTest123 : ", 16);
	ft_putchar(ft_str_is_alpha(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 0 car y'as des chiffres", 32);
	write(1, "\n", 1);
	str = "LumiTest";
	write(1, "Test avec LumiTest : ", 21);
	ft_putchar(ft_str_is_alpha(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 1 car y'as pas de chiffres", 35);
}*/
