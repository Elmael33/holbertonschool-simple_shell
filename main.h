#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void prompt(void);
char **read_line(void);
void execute_command(char **argv);










#endif
