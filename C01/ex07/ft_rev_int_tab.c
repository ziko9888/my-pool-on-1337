/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:59:01 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/28 21:45:10 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

/*int main(){
	int tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = 9;
	int i = 0;
	ft_rev_int_tab(tab , size);
	while (i < size){
		if(i == size -1){
			printf("%d\n" , tab[i++]);
		}else{
			printf("%d " , tab[i++]);
		}
	}
}*/
