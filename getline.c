#include "main.h"



char **read_line(void)
{
	char *buffer;
	char *token;
	const char* delim = " \n";
	size_t size = 0;
	char **argv;
	int i = 0;

	
	if (getline(&buffer, &size, stdin) == -1)
	{
		exit(-1);
	}
	token = strtok(buffer, delim);

	while (token != NULL)
	{
		token = strtok(NULL, delim);
		i++;
	}
	
	argv = malloc(sizeof(char *) * i + 1);

	i = 0;
	token = strtok(buffer, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;

	return (argv);
}

