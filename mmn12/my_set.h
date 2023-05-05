/*
// Created by Roi Argaman on 05/05/2023.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stack.h"



#define MAXVAL 100 /* max depth of stack stack */
/*macro for realloc*/
#define BIGGER(n) (n+1*sizeof(int)) 

void get_set(void);
int in_the_set(int *arr, int size);
void print_set(int *arr, int size);
int isnumber(char c);

