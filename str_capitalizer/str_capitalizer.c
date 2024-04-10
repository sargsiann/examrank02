#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;
	int k = 0;
	if (argc >= 2)
	{
		while(i < argc)
		{
			k = 0;
			while (argv[i][k])
			{
				if (argv[i][k] >= 'A' && argv[i][k] <= 'Z' && k - 1 >= 0 && argv[i][k - 1] != ' ')
					argv[i][k] += 32;
				else if (argv[i][k] >= 'a' && argv[i][k] <= 'z' 
						&& ((k == 0) || (k - 1 >= 0 && argv[i][k - 1] == ' ')))
					argv[i][k] -= 32;
				write(1,&argv[i][k],1);
				k++;
			}
			write(1,"\n",1);
			i++;
		}
	}
	else
		write(1,"\n",1);
	return 0;	
}
