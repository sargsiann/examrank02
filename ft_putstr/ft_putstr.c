#include <unistd.h>
void ft_putstr(char *str)
{
	unsigned long long i = 0;
	while(str[i])
		write(1,&str[i++],1);
}
