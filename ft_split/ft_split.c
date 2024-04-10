#include <stdio.h>
#include <stdlib.h>

int	 size_counter(char *str)
{
	int i = 0;
	int size = 0;
	int flag = 1;
	while (str[i])
	{
		while(str[i] && str[i] != '\n' && str[i] != ' ')
		{
			if (flag)
				size++;
			i++;
			flag = 0;
		}
		flag = 1;
		while (str[i] && (str[i] == '\n' || str[i] == ' '))
			i++;
	}
	return size;
}

int w_size(char *s, int i)
{
	int k = 0;
	while(s[i + k] && s[i + k] != '\n' && s[i + k] != ' ')
		k++;
	return (k);
}

char **ft_split(char *str)
{
	if (!str)
		return NULL;
	int k = 0;
	int i = 0;
	int j = 0;
	int word_size = 0;
	int size = size_counter(str);
	char **splitted = (char **)malloc(sizeof(char *) * (size + 1));
	splitted[size] = NULL;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\n')
		{
			splitted[k] = malloc(w_size(str, i) + 1);
			word_size = w_size(str,i);
			while (j < word_size)
			{
				splitted[k][j] = str[i];
				i++;
				j++;
			}
			splitted[k][j] = 0;
			j = 0;
			k++;
		}
	}
	//printf("%s",splitted[1]);
	return splitted;
}

/*int main()
{
	char **sp = ft_split("       ");

	int i = 0;	
	while (sp[i] != NULL)
	{
		printf("%s\n", sp[i]);
		i++;
	}
	//printf("%d\n", size_counter("a a a a a 319 a")); 
}*/
