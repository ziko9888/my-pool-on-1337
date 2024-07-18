/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:46:01 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/28 21:47:07 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int main(){
	int tab[] = {99, 7, 4, 7, 54, 43, 4, 9};
	int size = 8;
	int i = 0;
	ft_sort_int_tab(tab, size);
	while(i < size){
		if(i == size -1){
			printf("%d\n" , tab[i++]);
		}else{
			printf("%d " , tab[i++]);
		}
	}
}*/
