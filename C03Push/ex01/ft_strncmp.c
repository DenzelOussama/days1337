/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:15:13 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/23 10:56:46 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char	*p1;
	char	*p2;

	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && ((s1 <= p1 + n - 1) && (s2 <= p2 + n - 1)))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
