/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:19:58 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/22 18:22:15 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%s\n", ft_strncat(av[1], av[2], atoi(av[3])));
// 		printf("%s\n", strncat(av[1], av[2], atoi(av[3])));
// 	} 
// }