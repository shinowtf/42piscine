/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:29 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/02 15:05:20 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	buffer;

	buffer = 1;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		buffer *= nb;
		power--;
	}
	return (buffer);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(-2,2));
}*/
