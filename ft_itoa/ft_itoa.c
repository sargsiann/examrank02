#include <stdio.h>
#include <stdlib.h>

int		numlen(int nbr)
{
	int len = 0;
	if (nbr == 0)
		return 1;
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return len;
}

void	fill_str(char *str, int nbr,int len)
{
	int sign = 1;
	if (nbr < 0)
	{
		str[0] = '-';
		sign = -1;
	}
	while (nbr)
	{
		str[len] = sign * (nbr % (10)) + '0';
		nbr = nbr/10;
		len--;
	}
}

char	*ft_itoa(int nbr)
{
	int len = numlen(nbr);
   	char *str = malloc(len + 1);
	str[len] = 0;	
	if (nbr == 0)
		str[0] = '0';
	else
		fill_str(str, nbr, len - 1);	
	return str;
}

/*int main()
{
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(3));
	printf("%s\n",ft_itoa(2147483647));
	printf("%s\n",ft_itoa(-2));
}*/
