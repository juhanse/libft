/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:58:20 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/24 13:38:51 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*buffer;

	i = 0;
	if (!s)
		return (NULL);
	buffer = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = (*f)(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
