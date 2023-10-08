/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:17:09 by long              #+#    #+#             */
/*   Updated: 2023/09/27 17:00:35 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;

	count = 1;
	if (power < 0)
		count = 0;
	else
	{
		while (power > 0)
		{
			count *= nb;
			power--;
		}
	}
	return (count);
}


#include <stdio.h>
int	main(void)
{
	int	i = ft_iterative_power(-2, 0);
	printf("%d\n", i);
	return (0);
}
