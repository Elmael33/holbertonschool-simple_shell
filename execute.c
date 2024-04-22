#include "main.h"




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

	if (execve(argv[0], argv, NULL) == -1)
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
