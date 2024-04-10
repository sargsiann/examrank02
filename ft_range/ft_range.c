#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *array = NULL;
	int	tmp = start;
	int len = 0;
	if (tmp >= end)
	{
		while (tmp >= end)
		{
			tmp--;
			len++;
		}
	}
	else 
	{
		while (tmp <= end)
		{
			tmp++;
			len++;
		}
	}
	array = malloc(sizeof(int) * len);
	len = 0;
	if (start >= end)
	{
		while (start >= end)
		{
			array[len] = start;
			len++;
			start--;
		}
	}
	else
	{
		while (start <= end)
		{
			array[len] = start;
			len++;
			start++;
		}
	}
	return (array);
}

/*int main()
{
	int *a = ft_range(3,3);
	int i = 0;
	while (i < 1)
	{
		printf("%d",a[i]);
		i++;
	}
}*/
