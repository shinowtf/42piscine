/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:38:32 by nchok             #+#    #+#             */
/*   Updated: 2023/09/27 12:30:42 by nchok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	factorial;

	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (factorial);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
}*/
