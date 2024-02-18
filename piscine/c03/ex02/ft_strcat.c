/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:46:47 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 19:12:23 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	offset;

	i = 0;
	offset = 0;
	while (dest[offset] != '\0')
		offset++;
	while (src[i] != '\0')
	{
		dest[i + offset] = src[i];
		i++;
	}
	dest[i + offset] = '\0';
	return (dest);
}
