/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:03:37 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/26 12:28:08 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

void	comb2_print(int a, int b, int i)
{
	ft(a / 10 + '0');
	ft(a % 10 + '0');
	ft(' ');
	ft(b / 10 + '0');
	ft(b % 10 + '0');
	if (i == 1)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	i;

	a = 0;
	i = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				i = 0;
			}
			comb2_print(a, b, i);
			b++;
		}
		a++;
	}
}
