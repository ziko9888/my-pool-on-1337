/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:48:10 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/17 22:05:14 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);

int		slen(char *str);

int		checkdouble(char *base);

char	*reverse(char *str, int i)
{
	int		j;
	char	c;

	j = 0;
	str[i + 1] = '\0';
	if (str[j] == '-')
		j = 1;
	while (j < i)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i--;
		j++;
	}
	return (str);
}

int	count(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	unsigned int	t;
	char			*r;
	int				i;

	t = nbr;
	r = (char *)malloc(sizeof(char) * (count(nbr) + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	t = nbr;
	if ((checkdouble(base)) || (slen(base) <= 1))
		return (NULL);
	if (nbr < 0)
	{
		r[i++] = '-';
		t *= -1;
	}
	if (t == 0)
		r[i++] = base[0];
	while (t != 0)
	{
		r[i++] = base[t % slen(base)];
		t /= slen(base);
	}
	return (reverse(r, i - 1));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*r;

	if (ft_atoi_base(nbr, base_from) == -1)
	{
		return (NULL);
	}
	nb = ft_atoi_base(nbr, base_from);
	r = ft_putnbr_base(nb, base_to);
	return (r);
}
