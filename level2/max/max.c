int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				m;

	if (len == 0)
		return (0);
	m = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > m)
			m = tab[i];
		i++;
	}
	return (m);
}

#include <stdio.h>

int	max(int *tab, unsigned int len);

int	main(void)
{
	int a[] = {1, 3, 2};
	int b[] = {-5, -2, -10};
	int c[] = {42};

	printf("%d\n", max(a, 3)); // 3
	printf("%d\n", max(b, 3)); // -2
	printf("%d\n", max(c, 1)); // 42
	printf("%d\n", max(a, 0)); // 0

	return (0);
}