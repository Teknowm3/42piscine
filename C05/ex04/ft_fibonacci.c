/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:59 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/24 19:39:14 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if	(index == 1 || index == 2)
		return (1);
	if (index > 2)
		return ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (0);
}
#include <stdio.h>

int main ()
{
	int index;
	index = 7;
	printf("%d", ft_fibonacci(index));
	return (0);
}
