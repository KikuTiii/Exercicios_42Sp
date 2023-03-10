/* ************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkikuti- <mkikuti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:29:02 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/03/05 10:26:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	top_row(int x, int i)
{
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		i++;
		}
		if (x > 1)
		{
			if (i != x - 1)
				ft_putchar('B');
			else
				ft_putchar('C');
		i++;
		}
	}
	ft_putchar('\n');
}

void	middle_row(int x, int i)
{
	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	i++;
	}
	ft_putchar('\n');
}

void	bottom_row(int x, int i)
{
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		i++;
		}
		if (x > 1)
		{
			if (i != x - 1)
				ft_putchar('B');
			else
				ft_putchar('C');
		i++;
		}
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int	i;
	int	j;

	if (x == 0 || y == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (j < y)
	{
		if (j == 0)
			top_row(x, i);
		else if (j == y - 1)
			bottom_row(x, i);
		else
			middle_row(x, i);
		j++;
	}
	return (0);
}