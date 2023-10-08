/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:50:46 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/18 18:16:34 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main(void)
{
	int a = 9;
	int b = 2;
	int *mod = &a;
	int *div = &b;


	ft_div_mod(a, b, div, mod);
	printf("%d \n", *div);
	printf("%d", *mod);
}*/
