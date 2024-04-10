#include <unistd.h>
#include <stdio.h>

unsigned int mini_atoi(char *strnum)
{
	unsigned int res = 0;
	int		i = 0;
	while (strnum[i])
	{
		res = res * 10 + (strnum[i] - '0'); 
		i++;
	}
	return res;
}
void	puthex(unsigned int num)
{
	char *table = "0123456789abcdef";
	
	if (num == 0)
		return ;
	else
	{
		puthex(num / 16);
		write(1,&table[num % 16],1);
	}	
}

int main(int argc, char **argv)
{
	unsigned int num = 0;

	if (argc == 2)
	{
		num = mini_atoi(argv[1]);
		if (num == 0)
			write(1,"0",1);
		else
			puthex(num);
	}
	write(1,"\n",1);
}
