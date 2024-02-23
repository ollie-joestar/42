/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:49:08 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:34:50 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (src[i])
		ptr[i] = src[i++];
	ptr[i] = '\0';
	return (ptr);
}
