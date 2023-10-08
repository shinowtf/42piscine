/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:04:10 by long              #+#    #+#             */
/*   Updated: 2023/09/27 17:49:26 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46340)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (++i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}


#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int a = ac;
	int	i = ft_is_prime(atoi(av[1]));
	printf("%d\n", a);
	printf("%d\n", i);
	return (0);
}
