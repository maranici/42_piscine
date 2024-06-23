/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:22:22 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/23 16:35:31 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonnaci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonnaci(index - 2) + ft_fibonnaci(index - 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_fibonnaci(atoi(av[1])));
// }