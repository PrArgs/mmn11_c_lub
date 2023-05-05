/*
// Created by Roi Argaman on 05/05/2023.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/*macro for realloc*/
#define BIGGER(n) (n+ (1*sizeof(int)))

void get_set(void);
int in_the_set(int *arr, int size, int num);
void print_set(int *arr, int size);
void add_to_set(int *arr, int size, int num);

