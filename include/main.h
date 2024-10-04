#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int size);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int size);
char	*ft_strncat(char *dest, char *src, int size);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int size);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

#endif
