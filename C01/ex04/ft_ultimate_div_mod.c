/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:59:05 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/28 21:48:00 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

/*int main(){
	int a = 11;
	int b = 5;
	printf("a = %d and b = %d\n" , a , b);
	ft_ultimate_div_mod(&a , &b);
	printf("after use function a = %d (a / b) 
	and b = %d (a module b)\n" , a , b);
}*/
