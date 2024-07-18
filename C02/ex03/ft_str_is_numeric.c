/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:43:34 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/29 09:45:37 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	r;
	int	i;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			r = 0;
		}
		i++;
	}
	return (r);
}