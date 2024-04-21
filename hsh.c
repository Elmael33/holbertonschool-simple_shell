#include "main.h"



int main(void)
{
	while(1)
	{
		char **argv;
		prompt();
		argv = read_line();
		execute_command(argv);
	}
	return (0);




}
