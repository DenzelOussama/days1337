/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 11:44:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/29 12:17:12 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i] && i < argc)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
