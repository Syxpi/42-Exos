/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:09:13 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/19 18:05:23 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	(void)argc;
	i = argc - 1;
	while (i > 0)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		write(1, argv[i], len);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
