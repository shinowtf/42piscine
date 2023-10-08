/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:25:56 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/26 17:04:29 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	int				a;

	j = n;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && j > i)
	{
		if (s1[i] > s2[i])
		{
			a = 1;
		}
		else if (s1[i] == s2[i])
		{
			a = 0;
		}
		else
		{
			a = -1;
		}
		i++;
	}
	return (a);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "abdwe";
	char *s2 = "abdfewf";
	unsigned int n = 4;
	int result1 = ft_strncmp(s1, s2, n);
	int result2 = strncmp(s1, s2, n);
	printf("%d\n", result1);
	printf("%d\n", result2);
}*/
