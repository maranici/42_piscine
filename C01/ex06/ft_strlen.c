/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:16:23 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/20 19:19:07 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include "stdio.h"
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d", ft_strlen(av[1]));
// 	}
// 	else
// 	{
// 		printf("Please enter one argument.");
// 	}
// }