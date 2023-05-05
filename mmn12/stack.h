/*
// Created by Roi ArgAMAN on 05/05/2023.
*/

#include <stdio.h>
#include <math.h> /* for atof */
#include <stdlib.h>

#define MAXVAL 100 /* max depth of stack stack */
static int sp = 0; /* next free stack position */
static char stack[MAXVAL]; /* value stack */

int getop(void);
void push (double);
int pop (void);
void clear_stack(void);
void print_stack(void);
