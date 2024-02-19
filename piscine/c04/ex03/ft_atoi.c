/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:26:44 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 19:54:41 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	char	*arr;

	arr = " \n\t\v\f\r";
	while (*arr)
	{
		if (c == *arr)
			return (1);
		arr++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;
	int	i;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		sign *= 1 - (2 * (str[i++] == '-'));
	while (str[i] >= '0' && str [i] <= '9')
		num = num * 10 + (str[i++] - '0');
	return (num * sign);
}
/*
#include <stdio.h>

int	main(int argc,char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s\n", argv[1]);
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}*/
