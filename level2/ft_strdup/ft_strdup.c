
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dup;
    int     i;

    i = 0;
    while (src[i])
        i++;
    dup = (char *)malloc(sizeof(char) * (i + 1));
    if (!dup)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

#include <stdio.h>

int main()
{
	char	*a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
	return (0);
}