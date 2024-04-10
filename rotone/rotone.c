#include <unistd.h>

int	check(char c)
{
	int i = 0;
	char *s = "abcdefghijklmnopqrstuvwxy";
	while(s[i])
	{
		if (c - 32 == s[i] || c + 32 == s[i] || c == s[i])
		   return 1;	
		i++;
	}
	return 0;
}


int main(int argc, char **argv)
{
	char *s = NULL;
	int	i = 0;
	if (argc == 2)
	{
		s = argv[1];
		while(s[i])
		{
			if (s[i] == 'z')
				s[i] = 'a';
			else if (s[i] == 'Z')
				s[i] = 'A';
			else if (check(s[i]))
				 s[i] = s[i] + 1;
			 write(1, &s[i], 1);
			i++;	 
		}
	}
	write(1,"\n",1);
}
