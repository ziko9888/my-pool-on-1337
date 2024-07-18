/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:07:38 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/01 20:07:57 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lower(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z'))
				i++;
			else if (str[i - 1] >= '0' && str[i - 1] <= '9')
				i++;
			else
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
