/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 11:04:14 by olgarh            #+#    #+#             */
/*   Updated: 2026/09/02 11:06:33 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = (int *)malloc(sizeof(int) * diff);
	if (!*range)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (diff);
}

// int main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*res;

// 	a = 0;
// 	b = 20;
// 	ft_ultimate_range(&res, a, b);
// 	return(0);
// }