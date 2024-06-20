/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:07:25 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 19:11:26 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// #include "stdio.h"
// int	main(void)
// {
// 	int a = 17;
// 	int b = 3;

// 	ft_ultimate_div_mod(&a, &b);

// 	printf("*a: %d\n", a);
// 	printf("*b: %d\n", b);
// }