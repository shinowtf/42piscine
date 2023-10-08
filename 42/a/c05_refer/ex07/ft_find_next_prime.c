/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:15:08 by long              #+#    #+#             */
/*   Updated: 2023/09/27 17:55:57 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46340 && i * i < nb)
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int a = ac;
	int	i = ft_find_next_prime(atoi(av[1]));
	printf("%d\n", a);
	printf("%d\n", i);
	return (0);
}
