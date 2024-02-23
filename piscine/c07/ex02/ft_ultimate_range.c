/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:14:48 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:41:43 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int long	size;
	int long	i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < size && min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
