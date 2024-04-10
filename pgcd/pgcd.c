#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int a)
{
	if (a > 0)
	{
		ft_putnbr(a / 10);
		printf("%d", a % 10);
	}
	else
		return ;
}

int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;
	int smaller = 0;
	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (num1 > num2)
			smaller = num2;
		else
			smaller = num1;	
		while (smaller)
		{
			if (num1 % smaller == 0 && num2 % smaller == 0)
				break;
			if (smaller == 1)
				break;
			smaller--;
		}
		ft_putnbr(smaller);		
	}
	printf("\n");
}
