#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
extern char** environ;
void prompt(void);
char **read_line(int flag, char *buffer);
void execute_command(char **argv);
char *_strcpy(char *dest, char *scr);









#endif
