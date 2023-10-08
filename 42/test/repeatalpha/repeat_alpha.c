#include <unistd.h>
char	repeat_alpha(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				count = str[i] - 96;
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				count = str[i] - 64;
			}
			while (count > 0)
			{
				write(1, &str[i], 1);
				count--;
			}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		repeat_alpha(argv[1]);
	}
	return (0);
}
