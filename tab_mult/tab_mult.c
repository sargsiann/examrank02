#include <unistd.h>
#include <stdio.h>
int	simple_atoi(char *a)
{
	int	i = 0;
	int	sum = 0;
	while (a[i])
	{
		sum = sum * 10 + (a[i] - '0');
		i++;
	}
	return (sum);
}

void	putnbr(int num)
{
	char a = 0;
	if (num == 0)
		return ;
	else if (num > 0)
	{
		putnbr(num / 10);
		a = num % 10 + 48; 
		write(1,&a,1);
	}
}

int flen(char *a)
{
	int i = 0;
	while (a[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *a = argv[1];
		int num = 0;
		int i = 1;
		char p = i + 48;
		while (i <= 9)
		{
			write(1, &p, 1);
			write(1, " x ",3);
			write(1, a, flen(a));
			write(1, " = ", 3);
			num = simple_atoi(a) * i;	
			if (num == 0)
				write(1,"0",1);
			else
				putnbr(num);
			i++;
			p = i + 48;
			write(1,"\n",1);
		}
	}
	else 
		write(1, "\n", 1);
	return 0;
}
