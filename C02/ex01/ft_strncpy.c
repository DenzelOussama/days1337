/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:54:59 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/22 18:55:01 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;

	start = dest;
	while (dest < start + n && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (dest < start + n)
	{
		*dest = '\0';
		dest++;
	}
	return (start);
}
