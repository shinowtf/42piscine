/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:55:54 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/18 23:48:42 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int buffer;

	

}

int main(void)
{
	int size;
	int array[4];
	array[0] = 3;
	array[1] = 4;
	array[2] = 5;
	array[3] = 7;
	size = 4;
	int *ptr_array = array;
	ft_sort_int_tab(ptr_array, size);

	int i = 0;
	while (i < size)
	{
		printf("%d", array[i]);
		i ++;
	}
	return(0);
}
