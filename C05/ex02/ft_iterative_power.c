/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:41:50 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/23 14:47:45 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power == 0)
		return (1);
	while (power - 1)
	{
		nb *= nbr;
		power--;
	}
	return (nb);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("%d\n", ft_iterative_power(atoi(av[1]), atoi(av[2])));
// }