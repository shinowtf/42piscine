/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:21:02 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/14 18:44:11 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c >= 97 && c <= 122)
	{
		write(1, &c, 1);
		c--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
