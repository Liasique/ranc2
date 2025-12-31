
int	ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_strlen("Hello"));   // 5
	printf("%d\n", ft_strlen(""));        // 0
	return (0);
}