/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuesta <macuesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:13:48 by macuesta          #+#    #+#             */
/*   Updated: 2024/06/23 17:41:17 by macuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 2);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}

int	main(int ac, char **av)
{
	char	*ptr;
	int		i;

	i = 1;
	while (i < ac && i + 1 < ac)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ptr = av[i];
			av[i] = av[i + 1];
			av[i + 1] = ptr;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < ac)
		ft_putstr(av[i++]);
}
