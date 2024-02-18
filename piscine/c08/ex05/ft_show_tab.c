/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:50:17 by oohnivch          #+#    #+#             */
/*   Updated: 2024/01/29 12:36:00 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
/*
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strcpy(char *str)
{
    char    *dest;
    int     i;

    i = 0;
    i = ft_strlen(str);
    dest = (char *) malloc(sizeof(char) * (i + 1));
    i = 0;
    if (dest == NULL)
        return (NULL);
    while (str[i])
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}

struct  s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *stock;
    int         i;

    i = 0;
    stock = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
    if (stock == NULL)
        return (NULL);
    while (i < ac)
    {
        stock[i].size = ft_strlen(av[i]);
        stock[i].str = av[i];
        stock[i].copy = ft_strcpy(av[i]);
        i++;
    }
    stock[i].size = 0;
    stock[i].str = 0;
    stock[i].copy = 0;
    return (stock);
}

int	main(int argc, char **argv)
{
	free(ft_show_tab(ft_strs_to_tab(argc, argv)));
}
*/
