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
			break;

			execute_command(argv);
		}
	}
	return (EXIT_FAILURE);
}
