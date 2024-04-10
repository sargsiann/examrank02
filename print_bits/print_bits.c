#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet);
// C Program for the binary
// representation of a given number
void print_bits(unsigned char n)
{
    /* step 1 */
    int i = 7;
	unsigned char c = 0;
	int k = 0;
	while (i >= 0)
	{
		 k = (n >> i) & 1;
		 c = k + 48;
		//printf("%d",(n >> i) & 1 + 48);
		write(1, &c, 1);
		i--;
	}	
}

/*int main()
{
	print_bits(128);
}*/
