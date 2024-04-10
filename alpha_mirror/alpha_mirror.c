#include <unistd.h>

int	get_index(char *alphabet, char c)
{
	int i = 0;
	while (alphabet[i])
	{
		if (alphabet[i] == c || alphabet[i] - 32 == c || alphabet[i] + 32 == c)
			return i;
		i++;
	}
	return -1;
}

int main(int argc, char **argv)
{
	char *s = NULL;
	int	 i = 0;
	int index = 0;
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	if (argc == 2)
	{
		s = argv[1];
		while (s[i])
		{
			index = get_index(alphabet,s[i]);
			if (index >= 0)
			{
				if (s[i] >= 65 && s[i] <= 90)
					s[i] = 90 - index;
				else if (s[i] >= 97 && s[i] <= 122)
					s[i] = 122 - index;
			}
			write(1,s + i,1);
			i++;
		}
	}
	write(1,"\n",1);
}
