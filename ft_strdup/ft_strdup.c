#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	 ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strdup(char *s)
{
	char	*str = NULL;
	int		i = 0;
	
	//if (!s)
	//	return str;
	str = malloc(ft_strlen(s) + 1);
	str[ft_strlen(s)] = 0;
	while (i < ft_strlen(s))
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

/*int main()
{
	printf("'%s'\n",strdup("Davo"));
	printf("'%s'\n",ft_strdup("Davo"));
}*/
