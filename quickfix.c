#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = NULL;
	char charVar;
	int str_len = 0;
	char *input;

	printf("Welcome Kindly enter your name:\n");


	while ((charVar = getchar()) != '\n' && charVar != EOF)
	{
		printf("Character :%c\n", charVar);
		char *input = realloc(str, str_len + 2);

		printf("String is %s\n", str);

		if (input == NULL)
		{
			printf("Failed to allocate memory.\n");
			free(str);
			return (1);
		}
		/*str = input;*/
		charVar = input[str_len++];
	}
	printf("Input : %s\n", input);
	/*input[str_len] = '\0';*/

	printf("Dear %s\n", str);
	printf("The length of your name is: %d\n", str_len);

	free(str);
	return (0);
}
