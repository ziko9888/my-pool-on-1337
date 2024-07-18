/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:03:22 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/17 22:07:34 by zael-mou         ###   ########.fr       */
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

int	checkdouble(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if ((base[j] == base[i]) || (base[i] == '-') || (base[i] == '+')
				|| (base[j] == '-') || (base[j] == '+'))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	basefunc(char *str, char *base, int sign, int i)
{
	long	index;
	int		j;
	int		r;

	r = 0;
	while (str[i])
	{
		index = -1;
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				index = j;
				break ;
			}
			j++;
		}
		if (index == -1)
			break ;
		r = r * slen(base) + index;
		i++;
	}
	return (r * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	j;

	i = 0;
	sign = 1;
	j = 0;
	if ((checkdouble(base)) || (slen(base) <= 1))
		return (-1);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (basefunc(str, base, sign, i));
}
