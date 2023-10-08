/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:34:12 by nchok             #+#    #+#             */
/*   Updated: 2023/10/01 14:53:47 by nchok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	factorial;

	factorial = 1;
	if (nb > 0)
	{
		factorial *= nb * ft_recursive_factorial(nb - 1);
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
int main(void)
{
    printf("%i\n", ft_recursive_factorial(4));
}*/
