#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prototype
 * Return: 0
 */
char prompt(void)
{
    size_t len = 0;
    char *buffer = malloc(sizeof(char) * len);

    while (1)
    {
        printf("$ ");
        getline(&buffer, &len, stdin);
        printf("%s", buffer);

        if (getline(&buffer, &len, stdin) == -1)
        {
            (exit -1);
        }
	}
    return 0;
}