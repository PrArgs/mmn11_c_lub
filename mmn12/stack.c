//
// Created by argam on 05/05/2023.
//

#include "stack.h"

void push (double f){
    val[sp++] = f;
}
int pop (void) {
    if (sp > 0)
        return (val[--sp]);
    else {
        printf("Error: stack is empty\n");
        return 0;
    }
}

void clear_stack(void){
    while (sp){
        val[--sp] = '\0';
    }
    val[sp] = '\0';
}
void print_stack(void){
    int stackPointer = sp;
    while (stackPointer)
        printf("%f\n", val[--stackPointer]);
}

int getop(char []){
    if (sp > 0) {
        //check if stack is empty
        if (val[sp] == '\0'){
            printf("Error: stack is empty\n");
            return 0;
        }
        char top = val[sp];
        return atoi(top); //convert char to int
    }
    else {
        printf("Error: stack is empty\n");
        return 0;
    }

}


