/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:52:29 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 17:52:32 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// #include "stdio.h"
// int main(int ac, char **av){
// 	if (ac == 2){
// 		ft_putchar(*av[1]);
// 	}
// 	else {
// 		printf("%s", "Please enter one argument.");
// 	}
// }