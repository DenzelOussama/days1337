/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 11:08:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/09/02 11:12:38 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>
int	lenostr(char *str)
{
	int	result;

	result = 0;
	while (str[result] != '\0')
		result++;
	return (result);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	p = (char *)malloc(sizeof(char) * (lenostr(src) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			p[i] = src[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
// int main(void)
// {
// 	char *text;
// 	text=ft_strdup("salam ana oussama f heap\n");
// 	printf("%s",text);
// 	free(text);
//     return(0);
// }