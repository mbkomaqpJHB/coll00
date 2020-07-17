/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:04:29 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 14:07:07 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char c);

void	mid(int x, int y) 
{
	int		i;
	int		j;

	if (y > 1)
	{
		j = 0;
		while ((y - 2) > j)
		{
			ft_putchar('\n');
			ft_putchar('B');

			i = 0;
			while ((x - 2) > i)
			{
				ft_putchar(' ');
				i++;
			}

			if (x > 1)
			{
				ft_putchar('B');
			}
			j++;
		}
	}
}

void	end(int	x, int y)
{
	int		i;

	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('A');

		i = 0;
		while ((x - 2) > i)
		{
			ft_putchar('B');
			i++;
		}

		if (x > 1)
		{
			ft_putchar('C');
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	if (x > 0 && y > 0)
	{
		ft_putchar('A');

		i = 0;
		while ((x - 2) > i && y > i) 
		{
			ft_putchar('B');
			i++;
		}
	}

	if (x > 1 && y > 0)
	{
		ft_putchar('C');
	}
	mid(x, y);
	end(x, y);
}
