/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:13:09 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/21 17:27:26 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (size / 2 > i)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// #include "stdio.h"
// int	main(void)
// {
// 	int tab[10] = {0,1,2,3,4,5,6,7,8,9};

// 	printf("9,8,7,6,5,4,3,2,1,0:");
// 	ft_rev_int_tab(tab, 10);
// 	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
// }