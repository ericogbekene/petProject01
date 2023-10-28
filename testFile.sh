#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int num = 0;
	char *holder = NULL;
	char *userName = NULL;

	printf("Hi, Whats your name\n");

	scanf("%s", userName);

	printf("Hello there %s\n", userName);

	printf("Enter an extention\n");

	getline(&holder, &num, strlen(holder));

	return (0);

}

