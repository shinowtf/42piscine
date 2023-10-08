/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:23:57 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/09/20 15:27:21 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char src[] = "copythat";
	char dest;

	char *ptr_destination = ft_strcpy(dest, src);

	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%p\n", ptr_destination);
	return(0);
}
