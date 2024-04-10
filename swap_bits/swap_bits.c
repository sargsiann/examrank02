#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	unsigned char x = octet >> 4;
	unsigned char y = octet << 4;
	unsigned char z = x | y;
	return z;
}

/*int main()
{
	int a = 128;
	printf("%d",swap_bits(a));
}*/
