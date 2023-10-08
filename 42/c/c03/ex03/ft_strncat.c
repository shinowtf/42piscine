/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:33:48 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/25 18:09:19 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;
	int		n;
	char	*retun;

	retun = dest;
	n = nb;
	i = 0;
	while (dest[i] != '\0')
	{
		dest++;
	}
	j = 0;
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n --;
	}
	return (retun);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char destt[20] = "Append ";
	char srcc[20] = "me.own funct";
	unsigned int n = 4;
	char dest1[20] = "Append ";
	char src1[20] = "me.funct";
	char *resultt = ft_strncat(destt, srcc, n);
	char *result = strncat(dest1, src1, n);
	printf("%s\n", resultt);
	printf("%s\n", result);
	return(0);
}*/
