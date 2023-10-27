#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30];

	printf("Welcome Kindly enter your name:\n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Dear esteemed user your name is:%s\n", str);
	return (0);
}
