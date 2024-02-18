/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:26:37 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 11:40:14 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_itoa(int i)
{
	int	tens;
	int	ones;

	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		ft_putchar(tens + '0');
		ft_putchar(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_itoa(i);
			ft_putchar(' ');
			ft_itoa(j);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	ft_print_comb2();
}*/
