/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:11:50 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 19:16:58 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

// #include "stdio.h"
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		ft_putstr(av[1]);
// 	}
// 	else
// 	{
// 		printf("Please enter one argument.");
// 	}
// }