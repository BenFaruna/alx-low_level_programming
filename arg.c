#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *saveptr;
	char *token;
	char *str, *input;

	input = "how are you doing now";

	printf("$ ");

	printf("NULL: %lu\n", sizeof(NULL));
	printf("Size: %lu\n", sizeof("Size"));

	for (str = input; ; str = NULL)
	{
		token = strtok_r(str, " ", &saveptr);

		if (token == NULL)
			break;
		printf("Token: %s", token);
	}

	return (0);
}
