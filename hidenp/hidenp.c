#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
			i++;
	return i;
}
int main(int argc, char **argv)
{
	char *s1 = NULL;
	char *s2 = NULL;
	int i = 0;
	int k = 0;
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		//printf("%d is len\n",ft_strlen(s1));
		while (s2[i])
		{
			if (s2[i] == s1[k])
				k++;
			//printf("%d is k\n", k);
			if (k == ft_strlen(s1))
			{
				write(1,"1\n",2);
				return 0;
			}	
			i++;
		}
		write(1,"0\n",2);
		return 0;
	}
	write(1,"\n",1);
	return 0;
}
