/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:51:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/22 18:52:01 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(char *str)
{
	char			*hex;
	unsigned char	leftval;
	unsigned char	rightval;

	hex = "0123456789abcdef";
	leftval = (unsigned char)*str / 16;
	rightval = (unsigned char)*str % 16;
	write(1, "\\", 1);
	write(1, &hex[leftval], 1);
	write(1, &hex[rightval], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (((unsigned char)*str <= 31) || (unsigned char)*str >= 127)
		{
			write_hex(str);
			str++;
			continue ;
		}
		write(1, str, 1);
		str++;
	}
}
