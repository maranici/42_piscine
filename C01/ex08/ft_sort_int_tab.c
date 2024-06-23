/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:27:52 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/23 17:32:12 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// #include "stdio.h"
// int	main(void)
// {
// 	int tab[4] = {2,1,5,1};

// 	ft_sort_int_tab(tab, 4);
// 	printf("%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3]);
// }