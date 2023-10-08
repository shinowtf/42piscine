/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:58:35 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/05 09:25:55 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < 46340 && i * i < nb)
	{
		i++;
	}
	if (i * i != nb)
	{
		i = 0;
	}
	return (i);
}
/*#include <stdio.h>
#include <stdlib.h>
int    main()
{
    int input;

    input = 144;

    printf("The sqrt for %d is %d\n",input,ft_sqrt(input));
    return (0);
}
i < 46340 &&
int	main(int ac, char **av)
{
	int a = ac;
	int i = ft_sqrt(atoi(av[1]));
	printf("ignore this:%d\n",a);
	printf("this is answer:%d\n",i);
}*/
