#include "main.h"
/**
 * read_line - reads line from the standar input,
 * tokenizes it and stores it in a NULL terminated
 * array.
 * Return: The array of pointer to characters made of the
 * command to be executed.
 */


char *read_line(void)
{
	char *buffer = NULL;
	size_t size = 0;

	if (getline(&buffer, &size, stdin) == -1)
	{
		free(buffer);
		exit(0);
	}
		
	return (buffer);
}

