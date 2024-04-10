#include <unistd.h>
void	ft_putnbr(int num)
{
	if (num == 0)
		return ;
	else
	{
		char c = num % 10 + 48;
		ft_putnbr(num / 10);
		write(1, &c, 1);
	}	
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(1,"0",1);
	else
		ft_putnbr(argc - 1);
	write(1,"\n",1);
}
