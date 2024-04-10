#include <unistd.h>

int main(int argc, char **argv)
{
	char *string;
	int	index = 0;
	int len = 0;

	if (argc == 2)
	{
		string = argv[1];
		while (string[len])
			len++;
		index = len;
		index--;
		while (index != -1 && string[index] == ' ')
			index--;
		if (index == -1)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (index != -1 && string[index]	!= ' ')
			index--;
		index++;
		while(string[index] && string[index] != ' ')
			write(1, &string[index++], 1);
	}
	write(1,"\n",1);
	return (0);
}
