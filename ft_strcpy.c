#include "main.h"

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
