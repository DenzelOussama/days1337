/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 11:45:07 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/29 12:30:00 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}

int	printparams(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i] && i <= argc - 1)
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

void	ft_swap(char **str, char **rts)
{
	char	*temp;

	temp = *str;
	*str = *rts;
	*rts = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
				j++;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	printparams(argc, argv);
	return (0);
}
