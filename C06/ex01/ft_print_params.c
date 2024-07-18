/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:33:14 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/07 15:48:35 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	ft('\n');
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j < argc)
	{
		ft_str(argv[j++]);
	}
}
