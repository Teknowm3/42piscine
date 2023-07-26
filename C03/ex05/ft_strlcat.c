/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalkan <oalkan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:35:52 by oalkan            #+#    #+#             */
/*   Updated: 2023/07/26 11:53:46 by oalkan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dest[i] != 0)
		i++;
	while (src[r] != 0)
		r++;
	if (size <= i)
		r += size;
	else
		r += i;
	while (src[j] != 0 && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}

#include <stdio.h>
int main()
{
	char dest[10] = "Zattiri";
	char src[10] = "Zort";
	printf("%d",ft_strlcat(dest,src,20));
}
