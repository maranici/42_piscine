/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:58:06 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 19:01:32 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include "stdio.h"
// int	main(void)
// {
// 	int	a = 4;
// 	int b = 8;
// 	ft_swap(&a, &b);

// 	printf("a: %d\n", a);
// 	printf("b: %d\n", b);
// }