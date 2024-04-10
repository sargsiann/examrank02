#include <unistd.h>
int	flen(char *a)
{
	int i = 0;
	while (a[i])
		i++;
	return (i);
}
int main(int argc, char **argv)
{
	char *str = NULL;
	char *a = NULL;
	char *b = NULL;
	int i = 0;
	if (argc == 4 && flen(argv[2]) == 1 
		&& flen(argv[3]) == 1)
	{
		str = argv[1];
		a = argv[2];
		b = argv[3];
		while(str[i])
		{
			if (str[i] == argv[2][0])
				str[i] = argv[3][0];
			write(1, str + i, 1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
