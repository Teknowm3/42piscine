int ft_iterative_factorial(int nb)
{
	int result;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
	   return (0);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	int nb;
	nb = 6;
	printf("%d",ft_iterative_factorial(nb));
	return (0);
}	
