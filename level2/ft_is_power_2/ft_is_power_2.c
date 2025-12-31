#include <stdio.h>

int	ft_is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n - 1)) == 0);
}

int main(void)
{
	printf("%d\n", ft_is_power_of_2(1));
	printf("%d\n", ft_is_power_of_2(2));
	printf("%d\n", ft_is_power_of_2(4));
	printf("%d\n", ft_is_power_of_2(8));
	printf("%d\n", ft_is_power_of_2(3));
	printf("%d\n", ft_is_power_of_2(0));
	return (0);
}