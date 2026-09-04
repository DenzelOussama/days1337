/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 14:13:08 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/15 11:56:44 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			write(1, " ", 1);
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (!(a == 98))
				write(1, ", ", 1);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
