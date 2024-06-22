/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:25:16 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/22 18:58:10 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (j == 0)
				ptr = &str[i];
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (ptr);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("strstr: %s\n", strstr(av[1], av[2]));
// 		printf("ft_strstr: %s\n", ft_strstr(av[1], av[2]));
// 	}
// }