/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:56:01 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/28 21:38:39 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main(){
	int a = 0;
	int b = 9;
	printf("befor swap a = %d and b = %d\n" , a , b);
	ft_swap(&a , &b);
	printf("after swap a = %d and b = %d\n" , a , b);
}*/
