/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:54:42 by nchok             #+#    #+#             */
/*   Updated: 2023/10/02 18:13:34 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	num;

	num = nb;
	index = 0;
	if (num <= 0)
	{
		return (0);
	}
	if (num == 1)
	{
		return (1);
	}
	if (num >= 2)
	{
		while (index * index <= num)
		{
			if (index * index == num)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("sqrt (%d): %d\n", 0, ft_sqrt(0));
	printf("sqrt (%d): %d\n", 1, ft_sqrt(1));
	printf("sqrt (%d): %d\n", 4, ft_sqrt(4));
	printf("sqrt (%d): %d\n", 100, ft_sqrt(100));
	printf("sqrt (%d): %d\n", -10, ft_sqrt(-10));
	printf("sqrt (%d): %d\n", 12255644, ft_sqrt(12255644));
	printf("sqrt (%d): %d\n", 2147483647, ft_sqrt(2147483647));
	return (0);
}
