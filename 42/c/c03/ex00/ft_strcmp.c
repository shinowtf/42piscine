/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:45:17 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/26 14:30:17 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "abadwd";
	char *s2 = "zaaawd";
	int result1 = ft_strcmp(s1, s2);
	//int result2 = strcmp(s1, s2);
	printf("%d\n", result1);
	printf("%d\n", strcmp(s1, s2));
	return (0);
}*/
