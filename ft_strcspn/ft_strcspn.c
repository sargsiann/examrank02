#include <stddef.h>
int		check_ch(const char c, const char *charset)
{
	size_t i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	i = 0;
	
	while (s[i] && check_ch(s[i], charset))
		i++;
	return (i);
}
/*#include <stdio.h>

int main()
{
	printf("%zu", ft_strcspn("abcd", "pof"));
}*/
