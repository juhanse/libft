/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:21:56 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/10 22:21:57 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strncat(char *dest, char *src, int size)
{
	int	i;
	int	j;
	int	dst_len;
	int	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dst_len + src_len);
}
