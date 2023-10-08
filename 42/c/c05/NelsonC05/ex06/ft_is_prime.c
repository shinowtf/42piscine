/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:56:57 by nchok             #+#    #+#             */
/*   Updated: 2023/10/01 19:02:26 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	printf("%d is %d\n", 9, ft_is_prime(9));
	printf("%d is %d\n", -1000, ft_is_prime(-1000));
	printf("%d is %d\n", 2147483647, ft_is_prime(2147483647));
	printf("%d is %d\n", 31, ft_is_prime(31));
}
