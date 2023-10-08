/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:14:23 by nchok             #+#    #+#             */
/*   Updated: 2023/10/02 15:16:51 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power (nb, (power - 1)));
}

#include <stdio.h>
int main(void)
{
	printf("%i", ft_recursive_power(-2, 1));
	return (0);
}
