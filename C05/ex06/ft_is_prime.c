int ft_is_prime(int nb)
{
	int i;
	i = 2;
	if (nb < 1)
		return (0);
	else if (nb == 2)
	   return (1);	
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int main()
{
	int nb;
	nb = 25;
	printf("%d", ft_is_prime(nb));
	return (0);
}
