/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:39:53 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/02 10:17:23 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb > 0)
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (factorial);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}*/
