/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:28:16 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/03 12:54:05 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)	
{
	int	count;

	count = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (count >= nb / count)
	{
		if (nb % count == 0)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
#include <stdio.h>
int main(void)
{
	printf("%d is %d\n", 9, ft_is_prime(9));
	printf("%d is %d\n", 1, ft_is_prime(1));
	printf("%d is %d\n", 2147483647, ft_is_prime(2147483647));
	printf("(1 is prime, 0 is not prime)\n");
}
