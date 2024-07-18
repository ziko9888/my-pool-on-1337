/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:01:43 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/10 16:06:14 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	buffer = (int *)malloc(sizeof(int) * i);
	if (!(buffer))
	{
		*range = 0;
		return (-1);
	}
	index = 0;
	*range = buffer;
	while (min < max)
	{
		buffer[index] = min;
		index++;
		min++;
	}
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i++]);
	}
	printf("\n");
}*/
