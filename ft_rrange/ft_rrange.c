int		*ft_rrange(int start, int end)
{
	int temp = end;
	int len = 0;
	if (temp >= start)
	{
		while (temp >= start)
		{
			temp--;
			len++;
		}
	}
	else
	{
		while (temp <= start)
		{
			temp++;
			len++;
		}
	}
	int *arr = (int *)malloc(sizeof(int) * len);
	int i = 0;
	if (end >= start)
	{
		while (end >= start)
		{
			arr[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			arr[i] = end;
			end++;
			i++;
		}
	}
	return (arr);
}
