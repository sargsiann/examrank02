#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;
	char *operator = NULL;
	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		if (operator[0] == '+')
			printf("%d",num1 + num2);
		else if (operator[0] == '-')
			printf("%d",num1 - num2);
		else if (operator[0] == '*')
			printf("%d",num1 * num2);
		else if (operator[0] == '/')
			printf("%d",num1 / num2);
		else if (operator[0] == '%')
			printf("%d",num1 % num2);
	}
	printf("\n");
}	
