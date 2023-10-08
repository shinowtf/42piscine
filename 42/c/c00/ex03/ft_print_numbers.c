/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:24:59 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/14 18:44:57 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c >= 48 && c <= 57)
	{
		write (1, &c, 1);
		c++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
