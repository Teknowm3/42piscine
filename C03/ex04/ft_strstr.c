/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:34:19 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/26 09:59:10 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[i + j + 1] == '\0')
			{
				return (&str[i + j]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char str[40] = "Zattiri";
	char to_find[40] = "ti";
	char *to_finded = ft_strstr(str, to_find);
	printf("dest %s | to_find %s", str ,to_finded);
	return 0;
}
