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
	const char *delim = "\n ";
	size_t size = 0;
	char **argv = NULL;
	int i = 0;

	

	char *strCopy = NULL;


	if (getline(&buffer, &size, stdin) == -1)
	{
		free(buffer);
		exit(0);
	}
	
	if (buffer == NULL)
	{
		perror("failed to store string in buffer");
		exit(1);
	}
	
	token = strtok(buffer, delim);
	while (token != NULL)
	{
		strCopy = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv = malloc(sizeof(char *) * i + 1);
	if (argv == NULL)
	{
		free(argv);
		perror("malloc");
		exit(1);
	}
	i = 0;

	token = strtok(strCopy, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	return (argv);
}
