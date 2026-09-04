/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olgarh <olgarh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:59:18 by olgarh            #+#    #+#             */
/*   Updated: 2026/08/18 18:58:03 by olgarh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int	*p;
	int	*next;
	int	temp;

	p = tab;
	while (p < tab + size - 1)
	{
		next = p + 1;
		while (next <= tab + size - 1)
		{
			if (*p > *next)
			{
				temp = *p;
				*p = *next;
				*next = temp;
			}
			next++;
		}
		p++;
	}
}

// int main(void)
// {
//     int tab[]={632661,113,324,66376,8,7,97};
//     int size = 7;
//     ft_sort_int_tab(tab,size);
//     int *p;
//     p=tab;
//     while(p<tab+size)
//     {
//         printf("%d\n",*p);

//         p++;
//     }
//     return(0);
// }