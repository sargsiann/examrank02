#include <stdio.h>

int	includes_base(char c, char *symbols, int base)
{
	int i = 0;
	while (i < base)
	{
		if (symbols[i]  == c + 32 || symbols[i] == c)
			return 1;
		i++;
	}	
	return 0;
}

int order_in_base(char c, char *symbols)
{
	int i = 0;
	while (symbols[i])
	{
		if (symbols[i] == c || c + 32 == symbols[i])
			return i;
		i++;
	}
	return -1;
}

int	ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int	sign = 1;
	char *symbols = "0123456789abcdef";
	int start_index = 0;
	int end_index = 0;
	int	res = 0;
	int bs = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	start_index = i;
	while (str[i] && includes_base(str[i],symbols,base))
		i++;
	end_index = i - 1;
	while (end_index >= start_index)
	{	
		res += bs * order_in_base(str[end_index], symbols);
		bs *= base;
		end_index--;
	}
	return res * sign;
}

/*int main()
{
	printf("%d",ft_atoi_base("ffff",16));
}*/
