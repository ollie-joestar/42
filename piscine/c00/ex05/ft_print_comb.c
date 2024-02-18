/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:44:58 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/16 15:55:52 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_sep(void)
{
	write (1, ", ", 2);
}

void	print_num(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				print_num(a, b, c);
				if (a != '7' || b != '8' || c != '9')
					print_sep();
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
