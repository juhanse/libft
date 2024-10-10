/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:21:52 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/10 22:21:53 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = (char *)malloc(ft_strlen(src));
	if (!buffer)
		return (NULL);
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
