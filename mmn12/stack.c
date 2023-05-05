//
// Created by argam on 05/05/2023.
//

#include "stack.h"

void push (double f){
    stack[sp++] = f;
}
int pop (void) {
    if (sp > 0)
        return (stack[--sp]);
    else {
        printf("Error: stack is empty\n");
        return 0;
    }
}

void clear_stack(void){
    while (sp){
        stack[--sp] = '\0';
    }
    stack[sp] = '\0';
}
void print_stack(void){
    int stackPointer = sp;
    while (stackPointer)
        printf("%f\n", stack[--stackPointer]);
}

int getop(void){

    if (sp >= 0)
    {
        return atoi(stack);
    }

    else{
        printf("Error: stack is empty\n");
        return 0;
    }

}


