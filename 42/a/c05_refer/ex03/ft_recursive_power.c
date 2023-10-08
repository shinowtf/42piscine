/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:07:18 by long              #+#    #+#             */
/*   Updated: 2023/09/27 17:04:05 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}


#include <stdio.h>
int	main(void)
{
	int	i = ft_recursive_power(-1, 1);
	printf("%d\n", i);
	return (0);
}

