#include <unistd.h>

int main(int argc, char **argv)
{
	char *s = NULL;
	int len = 0;
	if (argc == 2)
	{
		s = argv[1];
		while (s[len])
			len++;
		while(len > 0)
		{
			len--;
			write(1,s + len,1);
		}
	}
	write(1,"\n",1);
}
