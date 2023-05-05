//
// Created by argam on 05/05/2023.
//

#include "my_set.h"



int main ( )
{
    printf("please enter a set of numbers: ");
    int *set = get_set();
    return 0;
}

void *get_set(void){
    //set a new dinamic array
    int *arr = (int *)malloc(sizeof(int));
    int size = sizeof(arr);
    //get input from user char by char
    char c;
    while ((c= getchar()) != EOF)
        switch (c) {
            case ' ':
                //if the stack is empty
                if (getop(val) || val[sp] != '\0'){
                    //checks if the number is in the set
                    if (in_the_set(arr, size)){
                        //if the number is in the set
                        clear_stack();
                        break;
                    }
                    else {
                        //if the number is not in the set
                        //add the number to the set
                        arr = (int *)realloc(arr, BIGGER(size));
                        arr[size] = getop(val);
                        size++;
                        clear_stack();
                        break;
                    }

                }
                break;
            //if the char is a number
            case '0'...'9':
                //push the number to the stack
                push(c);
                break;
            default:
                break;

        }
    print_set(arr, size);
    free(arr);
    size = 0;
    }

int in_the_set(int *arr, int size){
    int i = 0;
    for(i; i < size; i++){
        if (arr[i] == getop(val))
            return 1;
    }
    return 0;
}
void print_set(int *arr, int size){
    if (size == 0){
        printf("The set is empty\n");
        return;
    }
    printf("The set is: ");
    int i = 0;
    for(i; i < size; i++){
        printf(" %d, ", arr[i]);
    }
}