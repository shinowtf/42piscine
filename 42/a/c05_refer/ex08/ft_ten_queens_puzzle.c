/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: long <long@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:11:17 by long              #+#    #+#             */
/*   Updated: 2023/09/27 18:22:35 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_validity(char *str, char i)
{
	int	index;
	int	diag;

	index = -1;
	diag = 1;
	while (str[++index] != '\0')
	{
		if (i == str[index])
			return (-1);
	}
	if (index > 0)
	{
		while (diag <= index)
		{
			if (i == str[index - diag] - diag || i == str[index - diag] + diag)
				return (-1);
			diag++;
		}
	}
	return (index);
}

void	result(char *ptr, int size, int *count)
{
	int	trial;
	int	index;
	int	i;

	trial = -1;
	i = -1;
	while (++trial < size)
	{
		index = check_validity(ptr, '0' + trial);
		if (index != -1)
		{
			ptr[index] = '0' + trial;
			if (index == size - 1)
			{
				while (++i < size)
					write(1, &ptr[i], 1);
				write(1, "\n", 1);
				*count = *count + 1;
			}
			else
				result(ptr, size, count);
			ptr[index] = '\0';
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	*ptr;
	char	array[11];
	int		count;
	int		i;

	i = -1;
	while (++i < 11)
		array[i] = '\0';
	count = 0;
	ptr = &array[0];
	result(ptr, 4, &count);
	return (count);
}


#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}
