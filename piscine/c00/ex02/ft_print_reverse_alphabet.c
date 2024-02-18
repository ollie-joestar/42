/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:50:29 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/16 15:54:08 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	zyx;

	zyx = 'z';
	while (zyx >= 'a')
	{
		write (1, &zyx, 1);
		zyx--;
	}
}
