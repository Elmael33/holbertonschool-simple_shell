#include "main.h"

void execute(char **argv)
{
	pid_t pid = 0;
	int status;
	
	pid = fork();

	if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == - 1)
		{
			perror("failed execution");
			exit(-1);
		}
	}
	if (pid > 0)
	{
		wait(status);

	}
	if (pid < 0)
	{
		exit(1);
	}
}