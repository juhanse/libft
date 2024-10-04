#include "main.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

<<<<<<< HEAD
	i = 1;
	sign = 1;
	if (str[0] == '-')
		sign = -1;
=======
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
>>>>>>> e2b6327 (add: ft_atoi.c)
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 - (str[i] + 48);
		i++;
	}
	return (result * sign);
}
