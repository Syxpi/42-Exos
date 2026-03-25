/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:09:44 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/25 11:15:55 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*st = "JVE!5toU6Bnd1Dn8zBs2h3kLM9Fkeo=;Cj>=THqcN;5iJS5$JKw3E4iJuc";
	char	*find = "j>=THqcN;5";
	char	*res;

	res = ft_strstr(st, find);
	if (res)
	{
		write(1, "J'ai un truc ! C'est SA : ", 26);
		write(1, res, 16); 
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Y'as rien dans ton tas de merde Lumi.\n", 38);
	}
	return (0);
}*/
