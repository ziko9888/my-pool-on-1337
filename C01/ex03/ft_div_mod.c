/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mou <zael-mou@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:37:36 by zael-mou          #+#    #+#             */
/*   Updated: 2024/06/28 21:37:44 by zael-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(){
	int a = 11;
	int b = 5;
	int div;
	int mod;
	printf("a = %d and b = %d\n" , a , b);
	ft_div_mod(a , b , &div, &mod);
	printf("a division b = %d\n" , div);
	printf("a module b = %d\n" , mod);
}*/
