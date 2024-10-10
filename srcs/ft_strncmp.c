/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienhanse <julienhanse@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:22:20 by julienhanse       #+#    #+#             */
/*   Updated: 2024/10/10 22:22:20 by julienhanse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(char *s1, char *s2, int size)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < size)
		i++;
	return (s1[i] - s2[i]);
}
