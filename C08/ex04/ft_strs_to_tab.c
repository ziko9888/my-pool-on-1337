/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:44:15 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/16 19:58:40 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(slen(src) + 1);
	if (!(str))
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*r;
	int			i;

	r = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(r))
		return (0);
	i = 0;
	while (i < ac)
	{
		r[i].size = slen(av[i]);
		r[i].str = (av[i]);
		r[i].copy = ft_strdup(av[i]);
		i++;
	}
	r[i].str = NULL;
	return (r);
}
