/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:53:44 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/22 18:53:50 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char	*str)
{
	if (
		(*str >= '0' && *str <= '9')
		|| (*str >= 'A' && *str <= 'Z')
		|| (*str >= 'a' && *str <= 'z'))
		return (1);
	return (0);
}

void	ft_strupcase(char	*str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
}

void	ft_strlowcase(char	*str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str + 32;
}

char	*ft_strcapitalize(char	*str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if ((str == start && (*str >= 'a' && *str <= 'z'))
			|| (ft_is_alphanumeric(str) == 1
				&& ft_is_alphanumeric(str - 1) == 0))
		{
			ft_strupcase(str);
			str++;
		}
		else if (ft_is_alphanumeric(str) == 1
			&& ft_is_alphanumeric(str - 1) == 1)
		{
			ft_strlowcase(str);
			str++;
		}
		else
		{
			str++;
		}
	}
	return (start);
}
