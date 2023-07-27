/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:54:19 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/24 17:24:13 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_alphanumeric(char c)
{
	return (is_lowercase(c) || is_uppercase(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_lowercase(str[0]))
		str[0] = str[0] - 32;
	while (str[i++] != '\0')
	{
		if (!is_alphanumeric(str[i]) && is_lowercase(str[i + 1]))
			str[i + 1] = str[i + 1] - 32;
		else if (is_alphanumeric(str[i]) && is_uppercase(str[i + 1]))
			str[i + 1] = str[i + 1] + 32;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char s[] ="seLa m  ALAEYGUgum";
	ft_strcapitalize(s);
	printf("%s", s);
	return (0);
}
