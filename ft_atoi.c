#include "main.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 1;
	sign = 1;
	if (str[0] == '-')
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 - (str[i] + 48);
		i++;
	}
	return (result * sign);
}
