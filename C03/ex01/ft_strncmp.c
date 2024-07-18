/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:54:52 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/03 15:19:17 by zael-mou         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s1[i] && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
