/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:43:09 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 19:15:32 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	offset;

	if (nb == 0)
		return (dest);
	i = 0;
	offset = 0;
	while (dest[offset])
		offset++;
	while (src[i] != '\0' && i < nb)
		dest[i + offset] = src[i++];
	dest[i + offset] = '\0';
	return (dest);
}
