/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:51:02 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/18 20:48:09 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ireverse;
	int	temp;

	i = 0;
	ireverse = size - 1;
	while (i < size / 2)
	{
		temp = tab[ireverse];
		tab[ireverse] = tab[i];
		tab[i] = temp;
		i++;
		ireverse--;
	}
}
