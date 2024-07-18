/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:05:54 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/18 09:47:49 by zael-mou         ###   ########.fr       */
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

int	check(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**arr;
	int		j;
	int		k;

	arr = (char **)malloc(sizeof(char *) * 1024);
	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		arr[j] = (char *)malloc(1024 * sizeof(char));
		while (!check(charset, str[i]))
			i++;
		while (check(charset, str[i]) && str[i])
			arr[j][k++] = str[i++];
		while (!check(charset, str[i]))
			i++;
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

/*int main()
{
	char **arr = ft_split("########" , "####################");
	int i = 0;
	while(arr[i])
	{
		printf("%s\n" , arr[i++]);
	}
}*/
