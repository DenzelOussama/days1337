/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:23:53 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/25 12:22:27 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lenofstr(char *str)
{
	unsigned int	result;

	result = 0;
	while (*str)
	{
		result++;
		str++;
	}
	return (result);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	char			*end_dest;

	dest_len = lenofstr(dest);
	src_len = lenofstr(src);
	if (dest_len >= size)
		return (dest_len + src_len);
	end_dest = dest + dest_len;
	while (*src && end_dest < dest + size - 1)
	{
		*end_dest = *src;
		end_dest++;
		src++;
	}
	*end_dest = '\0';
	return (dest_len + src_len);
}
