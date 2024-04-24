#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
	int flag = 0;
	int i = 0;
	char *buffer = NULL;

	while (1)
	{
		char **argv = NULL;

		prompt();
		argv = read_line(flag, buffer);
		if (isatty(STDIN_FILENO) == 0)
			flag = 1;
		if (argv == NULL)
		{
			free(argv);
			break;
		}
		execute_command(argv);
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
		free(buffer);
		argv = NULL;
	}
	 exit(0);
}
