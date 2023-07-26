/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:47:38 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/23 03:34:16 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < size)
	{
		k = tab[i];
		j = i - 1;
		while (j >= 0 && k <= tab[j])
		{
			tab[j + 1] = tab[j];
			j--;
		}
		i++;
		tab[j + 1] = k;
	}
}

#include <stdio.h>
int main(void)
{
	int tab[] = {1, 7, 5, 2, 4, 6};

	int i;
	int size;
	
	size = 6;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i != 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
