#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int c;
	int num;

	c = 0;
	sign = 1;
	num = 0;
	while (str[c] == ' ' || (str[c] >= '\t' && str[c] <= '\r'))
	{
		c++;
	}
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
		{
			sign *= -1;
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		num = (str[c] - '0') + (num * 10);
		c++;
	}
	return (num *sign);
}
int main(void)
{
	char test[] = "  --+-1233n32";
	int result = ft_atoi(test);
	printf("%d\n", result);
	return (0);
}
