/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:04:35 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/25 18:09:49 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*ori;

	ori = str;
	if (!*to_find)
	{
		return (str);
	}
	while (*str != '\0')
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (ori);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "Learning alot from 42KL";
	char *to_find1 = "from";
	char *resultt = ft_strstr(str, to_find1);
	char *result = strstr(str, to_find1);
	if (!resultt)
	{
		printf("%s\n", to_find1);
	}
	else
	{
		printf("%s\n", resultt);
	}
	if (result != NULL)
	{
		printf("FOUND\n");
	}
	else
	{
		printf("NTG FOUND\n");
	}
	return(0);
}*/
