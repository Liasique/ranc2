unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = 8;
	while (i--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet);

int	main(void)
{
	unsigned char x = 38; // 00100110
	unsigned char y;

	y = reverse_bits(x);
	printf("%u\n", y);    // 100 (01100100)

	return (0);
}