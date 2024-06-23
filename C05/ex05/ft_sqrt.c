/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:35:55 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/23 16:40:55 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb / 2)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_sqrt(atoi(av[1])));
// }