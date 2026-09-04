/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 11:07:05 by olgarh            #+#    #+#             */
/*   Updated: 2026/09/02 11:08:46 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	p = (int *)malloc(sizeof(int) * (range));
	if (!p)
		return (NULL);
	i = 0;
	while (i < range)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

// int main(void)
// {
// 	int a = 20;
// 	int b = 40;

// 	int *res=ft_range( a, b);
// 	free(res);
// 	return(0);
// }