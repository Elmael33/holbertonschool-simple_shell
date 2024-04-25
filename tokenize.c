#include "main.h"








char **tokenize(char *buffer)
{
	char **argv = NULL;
	char *token = NULL;
	int i = 0;

	argv = malloc(sizeof(char *) * 2 + 1);
	token = strtok(buffer, "\n ");
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, "\n ");
		i++;
	}
	argv[i] = NULL;
	return (argv);
}
