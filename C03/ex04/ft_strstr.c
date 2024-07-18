/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:15:58 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/03 15:23:06 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		j = 0;
		while (to_find[j] == str[i] && str[i])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str);
		str++;
	}
	return (0);
}
