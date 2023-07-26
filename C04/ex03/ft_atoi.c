/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:32:49 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/26 10:06:46 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

int	is_special(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f')
		return (1);
	else if (*str == '\r' || *str == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (is_special(&str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && is_digit(&str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int main()
{
	printf("%d",ft_atoi("+-------34a"));;
}
