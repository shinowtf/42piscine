/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:28:31 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/20 15:43:49 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[0] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i += 1;
	}
	return (str);
}

#include <stdio.h>
int    main(void)
{
    char store[] = "juwcwqe";
    char stora[] = "hrtdw";
    char *result = ft_str_is_printable(store);
    char *resultt = ft_str_is_printable(stora);
    printf("%s\n", result);
 	printf("%s\n", resultt);
	return (0);
}
