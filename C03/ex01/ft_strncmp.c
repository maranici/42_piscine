/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:55:23 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/22 18:02:08 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n)
	{
		++s1;
		++s2;
		n--;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("strncmp: %d\n", strncmp(av[1], av[2], atoi(av[3])));
// 		printf("ft_strncmp: %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
// 	}
// }