#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src, including the terminating(\0)
 * @dest: pointeur
 * @src: pointeur
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
