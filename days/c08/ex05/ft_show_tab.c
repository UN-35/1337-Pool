/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelansa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:07:45 by yoelansa          #+#    #+#             */
/*   Updated: 2022/08/07 17:41:17 by yoelansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_stock_str.h"

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_nbr(int nb)
{
	if (nb < 0)
	{
		put_char('-');
		nb = nb * (-1);
		if (nb == -2147483648)
			write(1, "2147483648", 10);
	}
	if (nb >= 0 && nb <= 9)
		put_char(nb + '0');
	else
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		put_str(par[i].str);
		put_str("\n");
		put_nbr(par[i].size);
		put_str("\n");
		put_str(par[i].copy);
		put_str("\n");
		i++;
	}
}
