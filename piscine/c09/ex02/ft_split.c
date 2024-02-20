/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:10:40 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/19 15:16:21 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	int b = sizeof(char);
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == 0)
		return (1);
	return (0);
}

int	ft_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (check_sep(str[i + 1], charset) == 1 \
						&& check_sep(str[i], charset) == 0)
		{
			words++;
		}
		i++;
	}
	return (words);
}

void	ft_strdupo(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (check_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

void	ft_process(char **list, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], charset) == 0)
				j++;
			list[word] = (char *) malloc(sizeof(char) * (j + 1));
			ft_strdupo(list[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**list;
	int		words;

	words = ft_words(str, charset);
	list = (char **) malloc(sizeof(char *) * (words + 1));
	if (list == NULL)
		return (NULL);
	list[words] = 0;
	ft_process(list, str, charset);
	return (list);
}
/*
int	main(int argc, char **argv)
{
	
	if (argc == 3)
	{
		int i = 0;
		char **result = ft_split(argv[1], argv[2]);
		while (result[i])
		{
			printf("%s\n" , result[i]);
			i++;
		}
		free(result);
		return (0);
	}
	else
		return (1);
}*/
