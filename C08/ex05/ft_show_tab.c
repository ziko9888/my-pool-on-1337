/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:34:48 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/15 11:15:14 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft(char c)
{
	write(1, &c, 1);
}

void	ft_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft(str[i++]);
	}
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
	{
		ft(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft(nb % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_str(par[i].str);
		ft('\n');
		ft_putnbr(par[i].size);
		ft('\n');
		ft_str(par[i].copy);
		ft('\n');
		i++;
	}
}
