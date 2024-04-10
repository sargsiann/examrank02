#include <unistd.h>
int main(int argc, char **argv)
{
	char *str = NULL;
	int i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while(str[i] == ' ')
			i++;
		while(str[i] && str[i] != ' ')
		{
			write(1, str + i, 1);
			i++;
		}
	}
	write(1,"\n",1);
}
