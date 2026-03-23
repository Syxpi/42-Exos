/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 09:59:54 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/10 11:31:44 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char chara)
{
	write(1, &chara, 1);
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	while (str[i] != '\0' )
	{
		is_num = (str[i] >= '0' && str[i] <= '9');
		if (!(is_num))
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

	str = "123";
	write(1, "Test avec 123 : ", 16);
	ft_putchar(ft_str_is_numeric(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 1 car y'as des chiffres", 32);
	write(1, "\n", 1);
	str = "LumiTest";
	write(1, "Test avec LumiTest : ", 21);
	ft_putchar(ft_str_is_numeric(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 0 car y'as pas de chiffres", 35);
}*/
