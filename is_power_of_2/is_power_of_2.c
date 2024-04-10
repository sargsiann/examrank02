#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	unsigned int i = 2;
	if (n == 1)
		return 1;
	if (n > 2147483648)
		return 0;
	while (1)
	{
		if (i == n)
			return 1;
		if (i > n)
			return 0;
		i *= 2;
	}
	return 1;
}

/*int main()
{
	printf("%d",is_power_of_2(1024));
	printf("%d",is_power_of_2(4294967295));
}*/
