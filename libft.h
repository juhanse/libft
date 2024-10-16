/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhanse <juhanse@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:43:43 by juhanse           #+#    #+#             */
/*   Updated: 2024/10/11 15:56:18 by juhanse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(char const *str);
char	*ft_strdup(char const *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t size);
char	*ft_strcat(char *dest, const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strncat(char *dest, const char *src, size_t size);
char	*ft_strncat(char *dest, const char *src, size_t size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_calloc(size_t num, size_t size);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
