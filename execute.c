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
	if (execve(argv[0], argv, environ) == -1)
	{
		perror("./hsh");
		exit(1);
	}
	}
	else if (pid < 0)
	{
		perror("fork failed");
		exit(1);
	}
}
