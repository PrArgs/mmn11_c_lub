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
    int *arr = (int*)malloc(sizeof(int));
    int size = 0;
    int val; /*the number we scan*/
    int tmp; /*the int to char we scan*/
    int sign = 0; /*the sign of the number we scan*/

    char c;
    while ((c=getchar())!= EOF) {

    	/* if c is a digit*/
        if ('0' <= c && c <= '9')
        {

            /*convert char to int*/
            tmp = c - '0';
            if (sign == 0 )
            {
                sign = 1;
            }

            val = (val*10) +(tmp);
        }

        else if (c == ' ')
        {
            /*if blank */
            if (sign == 0) {
                continue;
            }
            /*if we just finish int scan*/
            else
            {
                /*add the number to the set if it's not already there*/
                if (add_to_set(arr,size,val*sign))
                {
                    size++;
                    tmp = 0;
                    sign = 0;
                    val = 0;
                }
            }

        }

        else if (c == '-'){
            sign = -1;
        }
    }
    printf("\n I'm out of the loop \n");

    /*if the last char is a number*/
        if (sign != 0)
        {
            /*add the number to the set if it's not already there*/
            add_to_set(arr,size,val*sign);
        }
    print_set(arr, size);
    size = 0;
    }

int add_to_set(int *arr, int size, int num){

    /*if the number is in the set continue*/
    if (in_the_set(arr, size, num)){
        return 0;
    }
    else
    {

        /*if the number is not in the set add the number to the set*/
        int *p;
        p = realloc(arr,ENLARGE_SIZE(size));
        if (p == NULL){
            printf("\n the reallocation failed \n");
            exit(0);
        }
        arr = p;
        printf("\n we are adding %d: \n", num);
        arr[size] = num;
        return 1;
    }

}

int in_the_set(int *arr, int size, int num){
    int i = 0;
    for(; i <= size; i++){
        if (arr[i] == num)
            return 1;
    }
    return 0;
}

void print_set(int *arr, int size){
    int i = 0;
    printf("The set is: ");
    for(; i <= size; i++){
        if (i == size)
        {
            printf(" %d", arr[i]);
            break;
        }

        printf(" %d, ", arr[i]);
    }
    printf("\n");
}
