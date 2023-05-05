//
// Created by argam on 05/05/2023.
//

#ifndef MMN12_STACK_H
#define MMN12_STACK_H
#include <stdio.h>
#include <math.h> /* for atof */
#include <stdlib.h>
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
#define COMMAND 'C' /* signal that a command was found */
#define MAXVAL 100 /* max depth of stack stack */
static int sp = 0; /* next free stack position */
static char stack[MAXVAL]; /* value stack */

int getop(void);
void push (double);
int pop (void);
void clear_stack(void);
void print_stack(void);
#endif //MMN12_STACK_H
