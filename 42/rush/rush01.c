/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sting <sting@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:26:23 by sting             #+#    #+#             */
/*   Updated: 2023/09/17 16:51:22 by lkah-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up(int x, int y)
{
	int	i;

	i = 2;
	if (x == 1 && y > 0)
	{
		ft_putchar('/');
	}
	if (x > 1)
	{
		ft_putchar('/');
		while (i < x)
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar('\\');
	}
}

void	middle(int x, int y)
{
	int	i;
	int	j;

	i = 2;
	j = 2;
	if (y > 1)
	{
		ft_putchar('\n');
		while (j < y)
		{
			ft_putchar('*');
			i = 2;
			while (i < x)
			{
				ft_putchar(' ');
				i++;
			}
			if (x > 1)
			{
				ft_putchar('*');
			}
			ft_putchar('\n');
			j++;
		}
	}
}

void	last(int x, int y)
{
	int	i;

	i = 2;
	if (y > 1)
	{
		ft_putchar('\\');
		i = 2;
		while (i < x)
		{
			ft_putchar('*');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('/');
		}
	}
}

void	rush(int x, int y)
{
	up (x, y);
	middle (x, y);
	last (x, y);
}
