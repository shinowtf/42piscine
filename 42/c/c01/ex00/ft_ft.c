/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:36:26 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/15 18:27:53 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>
int	main(void)
{
	int a;
	int *nbr;

	a = 23;
	nbr = &a;
	ft_ft(nbr);
	printf("%d\n" ,a);
	return(0);
}
*/
