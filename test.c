#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystFunc(void);

int main()
{
	mystFunc();
	return (0);
}
void mystFunc(void)
{
	size_t num = 0;
	char *holder = NULL;
	char *userName = NULL, *token = NULL;

	printf("Hi, Whats your name\n");

	/*fgets(userName, strlen(userName), stdin);*/

	getline(&userName, &num, stdin);



	printf("Hello there %s\n", userName);

	printf("Enter an extention\n");

	getline(&holder, &num, stdin);

	printf("Gets: %s\n", holder);

	token = strtok(holder, "\n");

	printf("TokenString %s\n", token);

	return ;
}
