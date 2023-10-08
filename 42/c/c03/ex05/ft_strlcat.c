/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:58:35 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/26 14:24:42 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//unsigned int	ft_strlcat(char *dest, char *src, unisgned int size)

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1 = "Hello ";
	char	*s2 = "World!";
	unsigned int size = 20;
	printf("%lu", strlcat(s1, s2, size));
	return(0);
}
