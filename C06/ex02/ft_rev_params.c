/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:41:34 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/07 16:09:27 by zael-mou         ###   ########.fr       */
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
	while (argc > 1)
	{
		ft_str(argv[argc - 1]);
		argc--;
	}
}
