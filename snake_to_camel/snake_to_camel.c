#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char *s = NULL;
	int	i = 0;
	if (argc == 2)
	{
		s = argv[1];
		while (s[i])
		{
			if (s[i] != '_')
			{
				if (i - 1 != -1 && s[i - 1] == '_')
					s[i] = s[i] - 32;
				write(1, s + i, 1);
			}
			i++;
		}		
	}
	write(1, "\n", 1);
	return (0);
}
