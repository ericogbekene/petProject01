#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	unsigned int result;
	unsigned int num = 1;
	char str[30];

	printf("Welcome Kindly enter your name:\n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Dear esteemed user your name is:%s\n", str);

	printf("Enter a positive number\n");
	scanf("%d", &num);

	result = factorial(num);

	printf("Factorial is :%u\n %u\n", result, factorial);




	return (0);
}
