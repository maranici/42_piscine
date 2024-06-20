/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:52:41 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 17:52:41 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printer(int number)
{
	int	digit1;
	int	digit2;

	if (number >= 10)
	{
		digit1 = number / 10;
		digit2 = number % 10;
		ft_putchar(digit1 + '0');
		ft_putchar(digit2 + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			printer(i);
			ft_putchar(' ');
			printer(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++j;
		}
		++i;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }