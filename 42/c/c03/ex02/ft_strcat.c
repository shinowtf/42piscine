/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:18:39 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/25 18:10:44 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*retun;
	int		i;
	int		j;

	retun = dest;
	i = 0;
	while (dest[i] != '\0')
	{
		dest++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
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
	char dest1[20] = "Append ";
	char src1[20] = "me.funct";
	char *resultt = ft_strcat(destt, srcc);
	char *result = strcat(dest1, src1);
	printf("%s\n", resultt);
	printf("%s\n", result);
	return(0); 
}*/
