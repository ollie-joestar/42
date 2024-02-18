/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:48:54 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 12:12:42 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	temp;

	pos = 0;
	while (pos < size / 2)
	{
		temp = tab[pos];
		tab[pos] = tab[size - pos - 1];
		tab[size - pos - 1] = temp;
		pos++;
	}
}
