/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:12:48 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/11 11:43:05 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

char	*joinfunc(int size, char *r, char **strs, char *sep)
{
	int	i;
	int	k;
	int	l;
	int	j;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		l = 0;
		while (strs[i][j])
			r[k++] = strs[i][j++];
		if (i < size - 1)
		{
			while (sep[l])
				r[k++] = sep[l++];
		}
		i++;
	}
	r[k] = '\0';
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*r;
	int		maloc;

	i = 0;
	maloc = 0;
	while (i < size)
	{
		maloc += slen(strs[i]);
		if (i < size - 1)
			maloc += slen(sep);
		i++;
	}
	r = (char *)malloc(sizeof(char) * maloc + 1);
	if (!(r))
		return (0);
	return (joinfunc(size, r, strs, sep));
}
