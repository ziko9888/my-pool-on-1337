/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:33:24 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/06 20:04:23 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

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

int	checkdouble(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[j] == base[i]) || (base[i] == '-') || (base[i] == '+')
				|| (base[j] == '-') || (base[j] == '+'))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	t;

	t = nbr;
	if ((checkdouble(base)) || (slen(base) <= 1))
	{
		return ;
	}
	if (nbr < 0)
	{
		ft('-');
		t *= -1;
	}
	if (t >= (unsigned int)slen(base))
	{
		ft_putnbr_base(t / slen(base), base);
	}
	ft(base[t % slen(base)]);
}
