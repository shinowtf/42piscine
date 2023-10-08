/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:36:26 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/01 18:46:33 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int size(char *src)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc(sizeof(*src) * size(*src) + 1);
		
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *src = "Hello";
	char *buffer = strdup(src);
	printf("strdup buffer:%s\n",buffer);
	return(0);
}
