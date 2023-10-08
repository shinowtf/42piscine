/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchok <nchok@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:18:36 by nchok             #+#    #+#             */
/*   Updated: 2023/10/02 17:46:35 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%i", ft_fibonacci(0));
}
