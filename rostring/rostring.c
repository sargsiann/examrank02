#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	 ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

int get_start_index(char *str)
{
	int i = 0;
	while (str[i] == ' ' && str[i])
		i++;
	while (str[i] != ' ' && str[i])
		i++;
	while (str[i] == ' ' && str[i])
		i++;
	return i;
}

char *get_last_word(char *str)
{
	char *last_word = NULL;
	int i = 0;
	int len = 0;
	int start = 0;
	while (str[i] == ' '  && str[i])
		i++;
	start = i;
	while (str[i] != ' ' && str[i])
	{
		i++;
		len++;	
	}
	last_word = malloc(len + 1);
	last_word[len] = 0;
	i = 0;
	while (i < len && str[start])
	{
		last_word[i] = str[start];
		i++;
		start++;
	}
	return last_word;
}

int main(int argc, char **argv)
{
	char *str = NULL;
	char *last_word = NULL;
	int i = 0;
	int flag = 0;
	if (argc >= 2)
	{
		str = argv[1];
		last_word = get_last_word(str);	
		i = get_start_index(str);
		if (i != ft_strlen(str))
		{
			while (str[i])
			{
				if (str[i] != ' ')
					flag = 1;
				if (str[i] == ' ' && flag)
				{
					write(1,str + i,1);
					flag = 0;
				}
				else if (str[i] != ' ')
					write(1,str + i,1);
				i++;
			}
			if (flag)
				write(1," ",1);
		}
		write(1,last_word, ft_strlen(last_word));
		free(last_word);
	}
	write(1,"\n",1);
}
