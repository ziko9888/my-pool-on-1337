/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:42:51 by zael-mou          #+#    #+#             */
/*   Updated: 2024/07/10 16:03:23 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	tab = (int *)malloc(sizeof(int) * i);
	if (!(tab))
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i++] = min++;
	}
	return (tab);
}

/*int main(){
	int min = 5;
	int max = 10;
	int *tab = ft_range(min, max);
	int i = 0;
	while (min < max)
	{
		if (min <= max -2)
		printf("%d " , tab[i]);
		else
			printf("%d" , tab[i]);
		min++;
		i++;
	}
	printf("\n");
}*/
