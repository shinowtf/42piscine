/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:10:09 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/20 20:16:51 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 32 && *str <= 126)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#include <stdio.h>
int    main(void)
{
    char *store = "ASD*^&*(wcwqe";
	char store = '1';
    char *stora = "ADSAF\n";
	char a = 'A';  
	char *b = "B";
    int result = ft_str_is_printable(store);
    int resultt = ft_str_is_printable(stora);
    printf("%d", result);
    printf("%d", resultt);
}
