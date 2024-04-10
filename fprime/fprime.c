#include <stdio.h>
#include <stdlib.h>

int	is_prime(int num)
{
	int	i = 2;
	while (i < num/2)
	{
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int	num = 0;
	int	tmp = 2;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num <= 0)
		{
			printf("\n");
			return 0;
		}
		if (is_prime(num) || num == 1)
		{
			printf("%d\n",num);
			return 0;	
		}
		while(tmp <= num)
		{
			if (is_prime(tmp) && num % tmp == 0)
			{
				num = num / tmp;
				printf("%d", tmp);
				if (tmp > num)
					break;
				printf("*");
				tmp = 1;
			}
			tmp++;	
		}	
	}
	printf("\n");
}
