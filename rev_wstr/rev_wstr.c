#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	char 	*str = NULL;
	int		len = 0;
	int		start = 0;
	int		end = 0;

	if (argc == 2)
	{
		str = argv[1];	
		len = ft_strlen(str) - 1;
		while (!(len < 0))
		{
			start = len;
			while (start != -1 && str[start] != 32 && str[start] != 11)
				start--;
			end = start + 1;
			while (end <= len)
				write(1, &str[end++], 1);
			if (start < 0)
				break;
			len = start;
			write(1, &str[len], 1);
			len--;
		}		
	}
	write(1, "\n", 1);
	return (0);
}
