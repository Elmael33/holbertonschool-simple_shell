#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
	int flag = 0;

	while (1)
	{
		char **argv = NULL;

		prompt();
		argv = read_line(flag);
		if (isatty(STDIN_FILENO) == 0)
			flag = 1;
		if (argv == NULL)
		{
			break;
		}
		execute_command(argv);
	}
	 exit(0);
}
