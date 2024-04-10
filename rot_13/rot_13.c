#include <stdio.h>
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
			if (str[i] >= 65 && str[i] <= 90)
			{
				if (str[i] + 13 > 90)
					str[i] = str[i] + 13 - 90 + 65 - 1;
				else
					str[i] = str[i] + 13;
			}
			else if (str[i] >= 97 && str[i] <= 122)
			{
				if (str[i] + 13 > 122)
					str[i] = str[i] + 13 - 122 + 97 - 1;
				else
					str[i] = str[i] + 13;
			}
			write(1, str + i, 1);
			i++;
		}
	}
	write(1,"\n",1);
}
