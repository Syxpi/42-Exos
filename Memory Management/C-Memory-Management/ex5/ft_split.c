/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerel- <lclerel-@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:29:59 by lclerel-          #+#    #+#             */
/*   Updated: 2026/03/19 19:27:27 by lclerel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_sep(str[i], charset) == 0
			&& (i == 0 || ft_sep(str[i - 1], charset) == 1))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_get_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[len] && ft_sep(str[len], charset) == 0)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (ft_words(str, charset) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_sep(str[i], charset) == 1)
			i++;
		if (str[i])
		{
			res[j++] = ft_get_word(&str[i], charset);
			while (str[i] && ft_sep(str[i], charset) == 0)
				i++;
		}
	}
	res[j] = 0;
	return (res);
}
/*
int	main(void)
{
	char	**res;
	int		i;
	int		j;
	res = ft_split("Ceci Est+Un+Test^Fait/Par&Lumi.", "+-^/&");
	i = 0;
	write(1, "Test avec : Ceci Est+Un-Test^Fait/Par&Lumi. : \n", 47);
	while (res[i])
	{
		j = 0;
		while (res[i][j])
		{
			write(1, &res[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/
