#include <unistd.h>

int main(int ac, char **a)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (a[1][i])
			i++;
		i--;
		while (i >= 0 && (a[1][i] == ' '))
			i--;
		while (i >= 0 && a[1][i] > 32)
			i--;
		i++;
		while (a[1][i] > 32)
		{
			write(1, &a[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}