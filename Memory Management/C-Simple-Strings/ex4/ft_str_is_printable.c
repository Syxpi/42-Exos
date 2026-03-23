/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:02:31 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/10 13:16:41 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char chara)
{
	write(1, &chara, 1);
}*/

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_print;

	i = 0;
	while (str[i] != '\0' )
	{
		is_print = (str[i] >= 32 && str[i] <= 126);
		if (!(is_print))
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

	str = "LumiTest123\n";
	write(1, "Test avec LumiTest123 (Backslash n) : ", 38);
	ft_putchar(ft_str_is_printable(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 0 car y'as un non-printable", 36);
	write(1, "\n", 1);
	str = "LumiTest123";
	write(1, "Test avec LumiTest123 : ", 24);
	ft_putchar(ft_str_is_printable(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 1 car y'as pas de non-printable", 40);
	write(1, "\n", 1);
	str = "";
	write(1, "Test avec Rien (NULL) : ", 24);
	ft_putchar(ft_str_is_printable(str) + '0');
	write(1, "\n", 1);
	write(1, "Output = 1 car le sujet dis que NULL = 1", 40);
}*/
