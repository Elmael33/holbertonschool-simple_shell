#include "main.h"
/**
 * read_line - reads line from the standar input,
 * tokenizes it and stores it in a NULL terminated
 * array.
 * Return: The array of pointer to characters made of the
 * command to be executed.
 */


char **read_line(int flag)
{
	char *buffer = NULL;
	char *token;
	const char *delim = "\n ";
	size_t size = 0;
	char **argv = NULL;
	int i = 0;

	


	if (getline(&buffer, &size, stdin) == -1)
	{
		free(buffer);
		if (isatty(STDIN_FILENO) == 0 && flag == 1)
			exit(0);
		exit(1);
	}
	
	
	argv = malloc(size);
	if (argv == NULL)
	{
		free(argv);
		perror("malloc");
		exit(1);
	}
	/**printf(buffer before strtok: %s\n, buffer);
	 */
	token = strtok(buffer, delim);
	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	/**printf(buffer after strtok: %s\n, buffer);
	 */
	return (argv);
}
