/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbkomaqp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:03:53 by mbkomaqp          #+#    #+#             */
/*   Updated: 2020/07/15 12:23:43 by mbkomaqp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
			ft_putchar('*');

			i = 0;
			while (i < (x - 2))
			{
				ft_putchar(' ');
				i++;
			}

			if (x > 1)
			{
				ft_putchar('*');
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
		ft_putchar('\\');

		i = 0;
		while (i < (x - 2))
		{
			ft_putchar('*');
			i++;
		}

		if (x > 1)
		{
			ft_putchar('/');
		}
	}

	if (x > 0 && y > 0)
	{
	ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int		i;
	if (x > 0 && y > 0)
	{
		ft_putchar('/');
	}

	i = 0;
	while (i < (x - 2) && y > 0) 
	{
		ft_putchar('*');
		i++;
	}

	if (x > 1 && y > 0)
	{
		ft_putchar('\\');
	}
	mid(x, y);
	end(x, y);
}
