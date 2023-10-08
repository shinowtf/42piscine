/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:09:37 by long              #+#    #+#             */
/*   Updated: 2023/09/27 17:09:27 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46340 && i * i < nb)
		i++;
	if (i * i != nb)
		i = 0;
	return (i);
}


#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int a = ac;
	int	i = ft_sqrt(atoi(av[1]));
	printf("%d\n", a);
	printf("%d\n", i);
	return (0);
}

