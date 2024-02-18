/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:18:37 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 19:19:40 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;
	unsigned int	index;
	unsigned int	src_size;

	index = 0;
	offset = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dest[offset])
		offset++;
	if (size == 0 || size <= offset)
		return (src_len + size);
	while (src[index] != '\0' && index < size - 1)
	{
		dest[(offset + index)] = src[index];
		index++;
	}
	dest[offset + index] = '\0';
	return (src_len + offset);
}
