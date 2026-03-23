/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:45:48 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/05 19:09:34 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char space, char b)
{
	write(1, &"0123456789"[a / 10], 1);
	write(1, &"0123456789"[a % 10], 1);
	write(1, &space, 1);
	write(1, &"0123456789"[b / 10], 1);
	write(1, &"0123456789"[b % 10], 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	space;
	char	a;
	char	b;

	space = ' ';
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, space, b);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
