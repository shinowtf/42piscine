/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:39:22 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/19 20:15:22 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*s;
	int	*e;
	int	t;

	s = tab;
	e = *(tab + size);
	while (s < e)
	{
		t = *s;
		*s = *e;
		*e = t;
		s++;
		e--;
	}
}

#include <stdio.h>
int main(void)
{
	int array[4];

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 9;
	int size = 4;
	int *ptr_array = array;
	ft_rev_int_tab(ptr_array, size);
	int i = 0;
	while (i < size)
		{
			printf("%d", array[i]);
			i ++;
		}
	return(0);
}
