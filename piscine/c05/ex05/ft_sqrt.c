/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:21:47 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:13:42 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc(int nb, int min, int max)
{
	int	mid;

	mid = (min + max) / 2;
	if (mid * mid == nb)
		return (mid);
	if (mid - 1 <= min && mid + 1 >= max)
		return (0);
	if (mid * mid > nb)
		return (ft_calc(nb, min, mid));
	if (mid * mid < nb)
		return (ft_calc(nb, mid, max));
	return (0);
}

int	ft_sqrt(int nb)
{
	int	min;
	int	max;

	min = 1;
	max = 46340;
	if (nb > 2147395600)
		return (0);
	if (nb < 1)
		return (0);
	if (min * min == nb)
		return (min);
	else if (max * max == nb)
		return (max);
	else if (nb < max)
		return (ft_calc(nb, min, (nb / 2)));
	else
		return (ft_calc(nb, nb / max, max));
}
