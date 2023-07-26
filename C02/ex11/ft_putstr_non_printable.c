/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:52:22 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/24 14:50:06 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			temp = str[i];
			if (temp > 16)
				ft_putchar(temp / 16 + 48);
			else
				ft_putchar(48);
			if (temp % 16 > 9)
				ft_putchar(temp % 16 + 87);
			else 
				ft_putchar(temp % 16 + 48);
		}
		else 
			ft_putchar(str[i]);
		i++;
	}
}
