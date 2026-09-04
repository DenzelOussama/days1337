/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 21:19:09 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/25 12:18:47 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*left;
	int	*right;
	int	temp;

	left = tab;
	right = tab + size-1;
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

// int main(void)
// {
// 	int tab[]={1,8,3,4,5,6,7,2};
// 	int size=8;
// 	ft_rev_int_tab(tab,size);
// 	int *p;
// 	p=tab;
// 	while(p<=tab+size-1)
// 	{
// 		printf("%d",*p);
// 		printf(",");
// 		p++;
// 	}
// 	return(0);
// }