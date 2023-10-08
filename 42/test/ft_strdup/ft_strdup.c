#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int i = 0;
	int j = 0;
	while (src[i] != '\0')
		i++;
	char *strcpy = malloc(sizeof(char) * (i + 1));
	if (strcpy != NULL)
	{
		while (src[j] != '\0')
		{
			strcpy[j] = src[j];
			j++;
		}
		strcpy[j] = '\0';
		}
	return(strcpy);
}
#include <stdio.h>
int main()
{
	char src[20] = "copythat";
	char *str = ft_strdup(src);
	printf("%s\n", str);
	return(0);
}
