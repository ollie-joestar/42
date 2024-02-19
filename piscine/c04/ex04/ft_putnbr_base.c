/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:13:34 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 19:59:00 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isbad(char c)
{
	char	*arr;

	arr = " \n\r\f\t\v+-";
	while (*arr)
	{
		if (c == *arr)
			return (1);
		arr++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_base_size(char *base)
{
	int	index;
	int	check;

	index = 0;
	check = 1;
	while (base[index])
	{
		while (base[index + check])
		{
			if (ft_isbad(base[index]) || base[index] == base[index + check])
				return (0);
			check++;
		}
		check = 1;
		index++;
	}
	return (index);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	num;

	size = ft_base_size(base);
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		num = -nbr;
	}
	else
		num = nbr;
	if (num >= size)
	{
		ft_putnbr_base(num / size, base);
	}
	ft_putchar(base[num % size]);
}
