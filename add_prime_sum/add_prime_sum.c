#include <stdio.h>
#include <unistd.h>

int minatoi(char *str)
{
	int res = 0;
	while (*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return res;
}

void	putnbr(int num)
{
	char c = 0;
	if (num == 0)
		return ;
	putnbr(num / 10);
	c = num % 10 + 48;
	write(1, &c, 1);	
}

int is_prime(int num)
{
	int i = 2;
	while (i <= num/2)
	{	
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int num = 0;
	int sum = 0;
	if (argc == 2 && argv[1][0] != '-' && argv[1][0] != '0')
	{
		num = minatoi(argv[1]);
		while (num >= 2)
		{
			if (is_prime(num))
				sum += num;
			num--;
			//printf("%d sum is",sum);	
		}
		putnbr(sum);
		write(1,"\n",1);
	}
	else
		write(1,"0\n",2);
	return 0;
}
