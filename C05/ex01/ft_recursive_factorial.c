int	ft_recursive_factorial(int nb)
{
	int result;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);;
	if (nb > 1)
		return nb * ft_recursive_factorial(nb - 1);
	return (0);
}

#include <stdio.h>
int main()
{
	int nb;
	nb = 6;
	printf("%d",ft_recursive_factorial(nb));
}
