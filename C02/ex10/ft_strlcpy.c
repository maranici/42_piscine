/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:54:39 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/21 19:15:36 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!*src)
		return (0);
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		char *dest1 = av[1];
// 		char *src1 = av[2];
// 		unsigned int size1 = atoi(av[3]);
// 		printf("%lu\n", strlcpy(dest1, src1, size1));
// 		printf("%s\n", dest1);

// 		char *dest2 = av[1];
// 		char *src2 = av[2];
// 		unsigned int size2 = atoi(av[3]);
// 		printf("%u\n", ft_strlcpy(dest2, src2, size2));
// 		printf("%s\n", dest2);
// 	}
// }