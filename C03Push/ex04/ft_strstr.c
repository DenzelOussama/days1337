/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:14:54 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/23 15:11:15 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*needl_in_str;
	char	*start_needle;

	start_needle = to_find;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		needl_in_str = str;
		while (*str == *to_find || *to_find == '\0')
		{
			if (*to_find == '\0')
			{
				return (needl_in_str);
			}
			to_find++;
			str++;
		}
		to_find = start_needle;
		str = needl_in_str + 1;
	}
	return (0);
}
