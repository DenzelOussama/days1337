/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:53:31 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/22 18:53:35 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*start;
	unsigned int	len;

	len = ft_strlen(src);
	start = src;
	if (size > 0)
	{
		while (*src && src < start + size - 1)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (len);
}
