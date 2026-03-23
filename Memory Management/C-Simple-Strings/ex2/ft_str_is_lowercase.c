/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:59:54 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/10 13:15:46 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char chara)
{
	write(1, &chara, 1);
}*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_low;

	i = 0;
	while (str[i] != '\0' )
	{
		is_low = (str[i] >= 'a' && str[i] <= 'z');
		if (!(is_low))
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
	write(1, "Test avec LumiTest123 : ", 24);
	ft_putchar(ft_str_is_lowercase(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 0 car y'as des majuscules", 34);
	write(1, "\n", 1);
	str = "lumitest";
	write(1, "Test avec lumitest : ", 21);
	ft_putchar(ft_str_is_lowercase(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 1 car y'as pas de majuscules", 37);
}*/
