/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:43:26 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/18 16:01:39 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int main(void)
{
	int pa;
	int pb;
	int *paa;
	int *pbb;
	
	pa = 22;
	pb = 54;
	paa = &pa;
	pbb = &pb;
	ft_swap(paa, pbb);
	//write(1, &(char){pa + '0'}, 1);
	//write(1, &(char){pb + '0'}, 1);
	printf("%d", pa);
	printf("%d", pb);

}*/
