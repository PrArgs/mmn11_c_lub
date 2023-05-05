/*
 Created by argam on 05/05/2023.
*/

#include "my_set.h"



int main ( )
{
    printf("please enter a set of numbers: ");
    get_set();
    printf("\n bye bye \n");
    return 0;
}

void get_set(void)
{
    /*set a new dynamic int array*/
    int *arr = (int *)malloc(sizeof(int));
    int size = 0;
    int val;
    int tmp;
    int sign = 1;

    char c;
    while ((c=getchar())!= EOF) {

    	/* if c is a digit*/
        if ('0' <= c && c <= '9')
        {
            tmp = c - '0';
            /*convert char to int*/
            if (sign > -1 )
            {
                sign = 1;
            }

            val = (val*10) +(tmp);
            continue;
        }

        else if (c == ' ')
        {
            /*if we are between ints*/
            if (sign == 0) {
                continue;
            }
            else
            {
                add_to_set(arr,size,val*sign);
                size++;
                tmp = 0;
                sign=0;
                val = 0;
            }
        }

        if (c == '-'){
            sign = -1;
        }
    }
    printf("\n here \n");

    /*if the last char is a number*/
    if (sign != 0)
    {
        add_to_set(arr,size,val*sign);
    }

    print_set(arr, size);
    printf("\n The set is: ");
    free(arr);
    size = 0;
    }

void add_to_set(int *arr, int size, int num){

    /*if the number is in the set continue*/
    if (in_the_set(arr, size, num)){
        return;
    }
    printf("new number added: %d\n", num);
    /*if the number is not in the set add the number to the set*/
    arr = realloc(arr, BIGGER(size));
    arr[size] = num;
}

int in_the_set(int *arr, int size, int num){
    int i = 0;
    for(; i < size; i++){
        if (arr[i] == num)
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
