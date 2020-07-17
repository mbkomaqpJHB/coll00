/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:00:32 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/16 14:06:01 by mbkomaqp         ###   ########.fr       */
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
			ft_putchar('|');

			i = 0;
			while ((x - 2) > i)
			{
				ft_putchar(' ');
				i++;
			}

			if (x > 1)
			{
				ft_putchar('|');
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
		ft_putchar('o');
		
		i = 0;
		while ((x - 2) > i)
		{
			ft_putchar('-');
			i++;
		}

		if (x > 1)
		{
			ft_putchar('o');
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	if (x > 0 && y > 0)
	{
		ft_putchar('o');

		i = 0;
		while ((x - 2) > i && y > i) 
		{
			ft_putchar('-');
			i++;
		}
	}

	if (x > 1 && y > 0)
	{
		ft_putchar('o');
	}
	mid(x, y);
	end(x, y);
}
