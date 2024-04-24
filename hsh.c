#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
	int flag = 0, i;

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
		for (i = 0; argv[i]; i++)
			free(argv[i]);
		free(argv);
	}
	 exit(0);
}
