#include "main.h"
/**
 * execute_command - executes command stored in argv array
 * @argv: array of pointer to characters
 */



void execute_command(char **argv)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid > 0)
	{
		wait(&status);
	}
	else if (pid == 0)
	{
		if (isatty(STDIN_FILENO) == 0)
		{
			if (pid == '\0')
			{
				int i = 1;
				fprintf(stderr, "%d : %s : not found\n", i, argv[0]);
				exit(1);
			}
		}
		if (execve(argv[0], argv, environ) == -1)
		{
			perror("./hsh");
			exit(1);
		}
	}
	
	else if (pid < 0)
	{
		exit(1);
	}
}
