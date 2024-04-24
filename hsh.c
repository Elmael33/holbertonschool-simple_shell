#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
	int boucle_stop = 0;
	{
		while (!boucle_stop)
		{
			char **argv = NULL;
			prompt();
			argv = read_line();
			
			if (argv == NULL)
			continue;

			execute_command(argv);
			if (argv == NULL)
			break;
			
		}
	}
	return (EXIT_SUCCESS);
}
