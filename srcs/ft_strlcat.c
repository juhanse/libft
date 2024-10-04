#include "../include/main.h"

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
