/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:59:11 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/22 19:45:49 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (*(s++))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;

	i = 0;
	dst_len = ft_strlen(dest);
	if (size <= dst_len)
		return (ft_strlen(src) + size);
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = 0;
	return (dst_len + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%lu\n", strlcat(av[1], av[2], atoi(av[3])));
// 		printf("%d\n", ft_strlcat(av[1], av[2], atoi(av[3])));
// 	} 
// }