#include <unistd.h>
int main()
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if (num % 3 == 0)
			write(1,"fizz",4);
		else if (num % 5== 0)
			write(1,"buzz",4);
		else 
		{
			char c = num % 10 + 48;
			if (num >= 10)
			{
				char k = num/10 + 48;
				write(1,&k,1);
			}
			write(1,&c,1);
		}
		num++;
		write(1,"\n",1);
	}
}
