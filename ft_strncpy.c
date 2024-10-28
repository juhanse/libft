/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:22:23 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/24 13:39:58 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i > size)
	{
		dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
