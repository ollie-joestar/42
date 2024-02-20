/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:45:58 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:15:48 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc(int nb, int min, int max)
{
	int	mid;

	mid = (min + max) / 2;
	if (mid * mid == nb)
		return (mid);
	if (mid - 1 <= min && mid + 1 >= max)
		return (max);
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
	if (nb < 1)
		return (0);
	if (min * min == nb)
		return (min);
	else if (max * max == nb)
		return (max);
	else if (nb < max)
		return (ft_calc(nb, min, (nb / 2)));
	else
		return (ft_calc(nb, (nb / max), max));
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 3;
	sqrt = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	else if (nb == i || nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (nb % i != 0)
	{
		if (i > sqrt)
			return (1);
		i += 2;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
