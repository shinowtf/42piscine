/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:27:45 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/30 14:12:17 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	num;

	c = 0;
	sign = 1;
	num = 0;
	while (str[c] == ' ' || (str[c] >= '\t' && str[c] <= '\r'))
	{
		c++;
	}
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
		{
			sign *= -1;
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		num = (str[c] - '0') + (num * 10);
		c++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
int main() {
    char str[] = " ---+--+1234ab567";
    int result = atoi(str);

    printf("Result: %d\n", result);

    return 0;
}*/
