/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:21:52 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/27 20:05:57 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*buffer;

	len = ft_strlen(src);
	buffer = (char *)malloc((len + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, src, len + 1);
	return (buffer);
}
