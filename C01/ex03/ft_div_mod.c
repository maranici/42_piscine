/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:02:17 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 19:07:06 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include "stdio.h"
// int	main(void)
// {
// 	int a = 17;
// 	int b = 3;
// 	int div = 0;
// 	int mod = 0;

// 	ft_div_mod(a, b, &div, &mod);

// 	printf("*div: %d\n", div);
// 	printf("*mod: %d\n", mod);
// }