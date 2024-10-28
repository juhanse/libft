/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:39:28 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/27 10:23:46 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	search;

	i = 0;
	search = (char) c;
	while (s[i] && s[i] != search)
		i++;
	if (s[i] == search)
		return ((char *) s + i);
	return (NULL);
}
