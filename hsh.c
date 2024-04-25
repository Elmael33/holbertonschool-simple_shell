#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */


int main(void)
{
/**int i = 0;
 */
	while (1)
	{
		char **argv = NULL;
		char *tokenized_String = NULL;

		prompt();
		tokenized_String = read_line();	
		argv = tokenize(tokenized_String);
		execute_command(argv);
		free(argv);
		free(tokenized_String);

	}
	return (0);
}
