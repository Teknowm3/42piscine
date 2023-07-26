/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:57:47 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/24 20:28:38 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int is_square;

	is_square = 2;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	while (nb > is_square)
	{	
		if (is_square * is_square == nb)
			return (is_square);
		is_square++;
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int nb;
	nb = 9;
	printf("%d",ft_sqrt(nb));
	return (0);
}
