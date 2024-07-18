/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:02:07 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/03 18:00:19 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	slen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;

	j = 0;
	while (dest[j])
	{
		j++;
	}
	dlen = j;
	if (size <= dlen)
		return (slen(src) + size);
	i = 0;
	while (src[i] && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (slen(src) + dlen);
}
