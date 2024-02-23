/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:11:50 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:43:38 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcato(char *dest, char *src, int *ptr)
{
	int	noti;
	int	offset;

	offset = *ptr;
	noti = 0;
	while (src[noti] != 0)
	{
		dest[offset + noti] = src[noti];
		noti++;
	}
	*ptr = offset + noti;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		combsize;
	int		noti;
	int		offset;
	int		*ptr;
	char	*res;

	noti = 0;
	offset = 0;
	ptr = &offset;
	if (size == 0)
		return (res);
	combsize = 0;
	while (noti++ < size)
		combsize += ft_strlen(strs[noti]);
	combsize += ((size - 1) * ft_strlen(sep));
	res = (char *) malloc(combsize * sizeof(char));
	noti = 0;
	while (noti < size)
	{
		ft_strcato(res, strs[noti], ptr);
		if (++noti < size)
			ft_strcato(res, sep, ptr);
	}
	return (res);
}
