int	ft_iterative_power(int nb, int power)
{
	int result;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	int nb;
	nb = 3;
	int power;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
