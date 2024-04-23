#include "main.h"
/**
 * prompt - displays the prompt
 */



void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
	printf("($) ");
	}
}

