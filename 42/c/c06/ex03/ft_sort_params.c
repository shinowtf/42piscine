/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkah-chu <lkah-chu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:53:45 by lkah-chu          #+#    #+#             */
/*   Updated: 2023/10/01 16:06:17 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	str_cmp(char *str1, char *str2)
{
	while (*str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	bubble_sort(char **str, int n)
{
	int		i;
	int		swap;
	char	*temp;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < n -1)
		{
			if (str[i] && str[i + 1] && str_cmp(str[i], str[i + 1]) > 0)
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	bubble_sort(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
