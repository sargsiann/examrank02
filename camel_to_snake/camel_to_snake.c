#include <unistd.h>
int main(int argc, char **argv)
{
	char *str = NULL;
	int i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				write(1,"_",1);
				str[i] = str[i] + 32;
			}
			write(1,str + i,1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
