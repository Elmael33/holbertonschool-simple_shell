#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
	while (1)
	{
		char **argv = NULL;

		prompt();
		argv = read_line();
		execute_command(argv);
	}
	return (0);
}
