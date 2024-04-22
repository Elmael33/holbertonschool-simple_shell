#include "main.h"
/**
 * read_line - reads line from the standar input,
 * tokenizes it and stores it in a NULL terminated
 * array.
 * Return: The array of pointer to characters made of the
 * command to be executed.
 */


char **read_line(void)
{
	char *buffer = NULL;
	char *token;
	const char *delim = "\n";
	size_t size = 0;
	char **argv;
	int i = 0;

	if (getline(&buffer, &size, stdin) == -1)
	{
		free(buffer);
		exit(1);
	}
	argv = malloc(sizeof(char *) * 2);

	i = 0;
	token = strtok(buffer, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	return (argv);
}

