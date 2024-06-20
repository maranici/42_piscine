/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:53:10 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 19:16:07 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		write(1, "-2147483647", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

// #include "stdlib.h"
// #include "stdio.h"
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		ft_putnbr(atoi(av[1]));
// 	}
// 	else
// 	{
// 		printf("Please enter one argument.");
// 	}
// }