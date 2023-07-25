#ifndef _MAIN_H
#define _MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#define DELIM " ,!¡¿?\'\"\n\t "
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
#define STDERR STDERR_FILENO

extern char **environ;
char **token_analyzer(char *br_argument);
char *checkpath(char **str_arg);
void _error(char *command);
int builtin(char **str_arg, int c_output, char *row_arg);
int checkbuilt(char **str_arg, int c_output, char *row_arg);
int arg_cmp(char **str_arg,int c_output);
int frk(char **str_arg, int c_output);
char *_strcpy(char *dest, char *src);
int _strncmp(char *string1, char *sttring2, int leng);
int _strcmp(char *string1, char *string2);
char *_strcat(char *dest, char *src);
int _strlen(char *v);
void _sign(int signal);
char *read_row(void);
char *get_envir(void);

#endif
