/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 10:26:58 by olgarh            #+#    #+#             */
/*   Updated: 2026/09/02 14:29:57 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	lenofstrs(char **str, int size, char *sep)
{
	int	result;
	int	i;
	int	j;
	int	seplen;

	result = 0;
	i = 0;
	j = 0;
	seplen = 0;
	while (i < size)
	{
		while (str[i][j])
		{
			result++;
			j++;
		}
		j = 0;
		i++;
	}
	seplen = ft_seplen(sep);
	result = result + seplen * (size - 1);
	return (result);
}

char	*ft_strcpy(char *dest, char **src, int len, char *sep)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 0;
	a = 0;
	while (a < len)
	{
		while (src[i][j] != '\0')
		{
			dest[a++] = src[i][j++];
		}
		j = 0;
		while (a != len && sep[j] != '\0')
		{
			dest[a++] = sep[j++];
		}
		j = 0;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*holder;
	int		len;

	if (size <= 0)
	{
		holder = (char *)malloc(1);
		if (holder)
			holder[0] = '\0';
		return (holder);
	}
	len = lenofstrs(strs, size, sep);
	holder = (char *)malloc(sizeof(char) * (len + 1));
	if (!holder)
		return (NULL);
	ft_strcpy(holder, strs, len, sep);
	return (holder);
}

int	main(void)
{
	char *text[]={"yo","wasup", "how", "you","doing"};
    char *sep=" \\";
    char *res;
    int size = sizeof(text)/sizeof(char *);
    res = ft_strjoin(size,text,sep);
	printf("%s\n",res);
	free(res);	
    return(0);
}
