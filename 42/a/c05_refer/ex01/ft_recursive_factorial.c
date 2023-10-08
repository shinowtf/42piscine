/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:30:53 by long              #+#    #+#             */
/*   Updated: 2023/09/27 16:57:47 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}


#include<stdio.h>
int	main(void)
{
	int	i = ft_recursive_factorial(5);
	printf("%d\n", i);
	return (0);
}

