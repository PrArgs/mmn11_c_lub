/*
// Created by Roi Argaman on 05/05/2023.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/*macro for realloc*/
#define ENLARGE_SIZE(n) (sizeof(int)*(n+1))

void get_set(void);
int in_the_set(int *arr, int size, int num);
void print_set(int *arr, int size);
int add_to_set(int *arr, int size, int num);

