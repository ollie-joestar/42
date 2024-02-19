/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:52:01 by oohnivch          #+#    #+#             */
/*   Updated: 2024/02/18 20:01:43 by ollie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	char	*arr;

	arr = " \n\t\r\v\f";
	while (*arr)
	{
		if (c == *arr)
			return (1);
		arr++;
	}
	return (0);
}

int	ft_base_size(char *base)
{
	int	index;
	int	check;

	index = 0;
	check = 1;
	while (base[index])
	{
		while (base[index + check])
		{
			if (ft_isspace(base[index]) || base[index] == base[index + check])
				return (0);
			check++;
		}
		check = 1;
		index++;
	}
	return (index);
}

int	ft_transform(char *str, char *base, int size, int offset)
{
	int	num;
	int	index;

	num = 0;
	index = 0;
	while (str[offset])
	{
		while (base[index])
		{
			if (str[offset] == base[index])
			{
				num = num * size + index;
				index = 0;
				break ;
			}
			index++;
			if (base[index] == 0)
				return (num);
		}
		offset++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	offset;
	int	size;

	offset = 0;
	sign = 1;
	size = ft_base_size(base);
	while (ft_isspace(str[offset]))
		offset++;
	while (str[offset] == '-' || str[offset] == '+')
	{
		if (str[offset] == '-')
			sign *= -1;
		offset++;
	}
	return (ft_transform(str, base, size, offset) * sign);
}
