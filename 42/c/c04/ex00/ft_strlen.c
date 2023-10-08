/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:29:17 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/25 14:41:49 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "99KL";
	int result = ft_strlen(str);
	int resultt = strlen(str);
	printf("ft_strlen:%d\n", result);
	printf("strlen:%d\n", resultt);
}*/
