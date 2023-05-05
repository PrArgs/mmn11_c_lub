/*
 Created by argam on 05/05/2023.
*/

#include "my_set.h"



int main ( )
{
    printf("please enter a set of numbers: ");
    get_set();
    return 0;
}

void get_set(void){
    /*set a new dinamic array*/
    int *arr = (int *)malloc(sizeof(int));
    int size = sizeof(arr);
    /*get input from user char by char*/
    char c;
    while ((c= getchar()) != EOF)
    	if (isnumber(c)){
    		push(c);
    		break;

    	}
    	else{
        switch (c) {
            case ' ':
                /*if the stack is empty*/
                if (getop() || stack[sp] != '\0'){
                    /*checks if the number is in the set*/
                    if (in_the_set(arr, size)){
                        /*if the number is in the set*/
                        clear_stack();
                        break;
                    }
                    else {
                        /*if the number is not in the set add the number to the set*/
                        arr = (int *)realloc(arr, BIGGER(size));
                        arr[size] = getop();
                        size++;
                        clear_stack();
                        break;
                    }

                }
                break;
                /*if the char is a number*/

            default:

                break;
        }

        }

    print_set(arr, size);
    free(arr);
    size = 0;
    }

int in_the_set(int *arr, int size){
    int i = 0;
    for(; i < size; i++){
        if (arr[i] == getop())
            return 1;
    }
    return 0;
}

void print_set(int *arr, int size){
    int i = 0;
    if (size == 0){
        printf("The set is empty\n");
        return;
    }
    printf("The set is: ");
    for(; i < size; i++){
        printf(" %d, ", arr[i]);
    }
    printf("\n");
}

int isnumber(char c){
	if (c >= '0' || c <= '9'){
		return 1;
	}
	return 0;


}
