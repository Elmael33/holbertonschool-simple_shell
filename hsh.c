#include "main.h"
/**
 * main - main function of the shell that runs every other functions
 * Return: 0
 */

int main(void)
{
/**int i = 0;
 */
	while (1)
	{
		char **argv = NULL;

		prompt();
		argv = read_line();
		/**while (argv[i])
		{
			printf("i = %i et argv[%d] = %s\n",i, i, argv[i]);
			i++;
		}*/
		execute_command(argv);
	}
	return (0);
}
