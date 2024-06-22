/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:15:55 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/22 17:45:08 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

// #include <string.h>
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("strcmp: %d\n", strcmp(av[1], av[2]));
// 		printf("ft_strcmp: %d\n", ft_strcmp(av[1], av[2]));
// 	}
// }