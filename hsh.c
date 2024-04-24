#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
	{
		while (1)
		{
			char **argv = NULL;
			prompt();
			argv = read_line();
			
			if (argv == 1)
			continue;

			execute_command(argv);
			if (argv == NULL)
			break;

		}
	}
	return (0);
}
