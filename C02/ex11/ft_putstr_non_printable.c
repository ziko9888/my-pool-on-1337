/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:57:47 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/01 20:21:49 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*r;
	unsigned char	u;

	r = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		u = str[i];
		if ((u < 32) || (u == 127))
		{
			ft('\\');
			ft(r[u / 16]);
			ft(r[u % 16]);
		}
		else
		{
			ft(str[i]);
		}
		i++;
	}
}
