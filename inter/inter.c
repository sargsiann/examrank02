#include <stdio.h>
#include <unistd.h>
int	includes(char a, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return 1;
		i++;
	}
	return 0;
}
int	check_double(int index, char *str)
{
	int i = 0;
	char c = str[index];
	while (str[i])
	{
		if (str[i] == c && i < index)
			return 0;
		i++;
	}
	return 1;
}
int main(int argc, char **argv)
{
	char *first = NULL;
	char *second = NULL;
	int	i = 0;
	if (argc == 3)
	{
		first = argv[1];
		second = argv[2];
		
		while (first[i])
		{
			if (includes(first[i],second) && check_double(i, first))
				write(1, first + i, 1);
			i++;
		}	
	}
	write(1,"\n",1);
	return 0;
}
