/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:20:35 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/30 14:36:19 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc - 1;
	if (argc > 1)
	{
		while (a >= 1)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				b++;
			}
			write(1, argv[a], b);
			write(1, "\n", 1);
			a--;
		}
	}
	return (0);
}
