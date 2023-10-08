/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:15:11 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/02 10:16:49 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

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
/*#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
