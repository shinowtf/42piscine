/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:26:43 by nchok             #+#    #+#             */
/*   Updated: 2023/10/02 15:02:23 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	output;

	output = 1;
	while (power > 1)
	{
		output = output * nb;
		power--;
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (output);
}

#include <stdio.h>
int main(void)
{
	printf("%i",ft_iterative_power(-2,2));
}
