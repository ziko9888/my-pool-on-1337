/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:17:22 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/03 11:13:05 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (slen(s1))
	{
		return (s1[i]);
	}
	return (r);
}
