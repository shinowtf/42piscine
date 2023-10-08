/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:17:51 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/19 11:06:29 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int main(void)
{
	int a = 9;
	int b = 2;
	int *tempa;
	int *tempb;
	tempa = &a; //ptr 
	tempb = &b;
	// *tempa = a; int type 

	ft_ultimate_div_mod(tempa, tempb);
	printf("%d", a);
	printf("%d", b);
}
