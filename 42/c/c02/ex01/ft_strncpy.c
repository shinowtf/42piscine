/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:55:43 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/20 15:28:36 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (n > 0 && src != NULL)
	{
		*dest = *src;
		dest ++;
		src ++;
		n --;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char src[] = "copythatlol";
	char dest[1000];
	int n = 5;
	char *ptr_dest = ft_strncpy(dest, src, n);

	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%p\n", ptr_dest);
	return(0);
}
