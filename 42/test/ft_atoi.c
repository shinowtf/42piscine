#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int signcounter;
	int results;

	i = 0;
	sign = 1;
	signcounter = 0;
	results = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		signcounter++;
		i++;
	}
	if (signcounter > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		results *= 10;
		results += (str[i] - '0');
		i++;
	}
	return (results * sign);
}
#include <stdio.h>
#include <stdlib.h>

// Your ft_atoi function
int ft_atoi(const char *str);

int main()
{
    printf("Test Cases for ft_atoi:\n");

    // Test Case 1: Basic positive number
    const char *test1 = "12345";
    int result1 = ft_atoi(test1);
    printf("Input: \"%s\", Expected: 12345, Result: %d\n", test1, result1);

    // Test Case 2: Basic negative number
    const char *test2 = "-6789";
    int result2 = ft_atoi(test2);
    printf("Input: \"%s\", Expected: -6789, Result: %d\n", test2, result2);

    // Test Case 3: Leading spaces and tabs
    const char *test3 = "    42";
    int result3 = ft_atoi(test3);
    printf("Input: \"%s\", Expected: 42, Result: %d\n", test3, result3);

    // Test Case 4: Leading '+' sign
    const char *test4 = "+789";
    int result4 = ft_atoi(test4);
    printf("Input: \"%s\", Expected: 789, Result: %d\n", test4, result4);

    // Test Case 5: Leading '-' sign
    const char *test5 = "---123";
    int result5 = ft_atoi(test5);
    printf("Input: \"%s\", Expected: -123, Result: %d\n", test5, result5);

    // Test Case 6: Mixed signs and spaces
    const char *test6 = "  -42 + 17";
    int result6 = ft_atoi(test6);
    printf("Input: \"%s\", Expected: -42, Result: %d\n", test6, result6);

    // Test Case 7: Overflow
    const char *test7 = "2147483648"; // This should cause overflow on most systems
    int result7 = ft_atoi(test7);
    printf("Input: \"%s\", Expected: undefined (overflow), Result: %d\n", test7, result7);

    // Test Case 8: Empty string
    const char *test8 = "";
    int result8 = ft_atoi(test8);
    printf("Input: \"%s\", Expected: 0, Result: %d\n", test8, result8);

    // Test Case 9: No valid digits
    const char *test9 = "abcd";
    int result9 = ft_atoi(test9);
    printf("Input: \"%s\", Expected: 0, Result: %d\n", test9, result9);

    return 0;
}

