#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char 	*str = NULL;
	size_t	i = 0;
	int		flag = 1;
		
	
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == 32 || str[i] == 11)
			i++;
		while (str[i])
		{	
			if ((str[i] == 32 || str[i] == 11) && flag && 
					(str[i + 1] && str[i + 1] != 32 && str[i + 1] != 11))
			{
				write(1, &str[i], 1);
				flag = 0;
			}
			else if (str[i] != 32 && str[i] != 11) 
			{	
				write(1, &str[i], 1);
				flag = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
