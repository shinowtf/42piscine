/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:04:50 by long              #+#    #+#             */
/*   Updated: 2023/09/27 16:56:24 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
		count = 0;
	while (nb > 0)
	{
		count *= nb;
		nb--;
	}
	return (count);
}

#include <stdio.h>
int	main(void)
{
	int	i = ft_iterative_factorial(5);
	printf("%d\n", i);
	return (0);
}
