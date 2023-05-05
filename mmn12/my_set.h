//
// Created by argam on 05/05/2023.
//

#ifndef MMN12_MY_SET_H
#define MMN12_MY_SET_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stack.h"


#define NUMBER '0' // signal that a number was found
#define MAXVAL 100 /* max depth of val stack */
#define BIGGER(n) (n+1*sizeof(int)) // macro for realloc

void *get_set(void);
int in_the_set(int *arr, int size);
void print_set(int *arr, int size);


#endif //MMN12_MY_SET_H
