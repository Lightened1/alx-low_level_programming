#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int putchar(char);
char *create_array(unsigned int size, char c);
char *_str_concat(char *s1, char *s2);
char *strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(intac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
