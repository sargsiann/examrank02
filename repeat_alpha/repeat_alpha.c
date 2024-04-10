#include <unistd.h>

int main(int argc, char **argv)
{
	char *s = NULL;
	int	 i = 0;
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int	counter = 0;
	if (argc == 2)
	{
		s = argv[1];
		while (s[i])
		{
			int k = 0;
			while (alphabet[k])
			{
				if (alphabet[k] == s[i] 
					|| alphabet[k] == s[i] + 32)
				{
					counter = k;
					break;
				}
				k++;
			}
			counter++;
			if (counter == 1)
			{
				write(1,&s[i],1);
				counter--;
			}
			while (counter)
			{
				write(1,&s[i],1);
				counter--;
			}
			i++;	
		}
	}
	write(1,"\n",1);
	return (0);
}
