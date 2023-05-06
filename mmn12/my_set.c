/*
 Created by Roi Argaman on 05/05/2023.
*/

#include "my_set.h"



int main ( )
{
    printf("please enter a set of numbers: ");
    get_set();
    return 0;
}

void get_set(void)
{
    /*set a new dynamic int array*/
    int* arr = (int*) calloc(1,1*sizeof(int));
    int size = 0;
    int val=0; /*the number we scan*/
    int tmp=0; /*the int to char we scan*/
    int sign = 0; /*the sign of the number we scan*/

    char c;
    while ((c=getchar())!= EOF) {

    	/* if c is a digit*/
        if ('0' <= c && c <= '9')
        {

            /*convert char to int*/
            tmp = c - '0'; /*convert char to int*/
            if (sign == 0 )
            {
                sign = 1;
            }
            val = (val*10) +(tmp);
        }

        else if (c == ' ' && sign != 0)
        {
            /* Add the number to the set if it's not in the set increase the size index and reset the other indexes anyway*/
            size += (add_to_set(arr, size, val*sign))? 1:0;
            tmp = 0;
            sign = 0;
            val = 0;
        }
        else if (c == '-'){
            sign = -1;
        }
    }
    if (sign != 0)
    { /*for the last number in the set*/
        size += (add_to_set(arr, size, val*sign))? 1:0;
    }
    print_set(arr, size);
    size = 0;
    }

int add_to_set(int* arr, int size, int num)
{
    /*if the number is in the set return 0*/
    if(in_the_set(arr, size, num))
    {
        return 0;
    }
    /*if the number is not in the set add the number to the set but first realloc the array*/
    int* tmp;
    tmp = realloc(arr, ENLARGE_SIZE(size));
    if (tmp == NULL) {
        exit(0);
    }
    arr[size] = num;/*add the number to the set*/
    arr[size+1] = 0;/*add 0 to the end of the set*/
    return 1;/*return 1 if the number was added to the set*/
}
/*check if the number is in the set*/
int in_the_set(int* arr, int size, int num){
    int i = 0;
    for(; i < size; i++)
    {
        if (arr[i] == num)
        {
            return 1;/*the number is in the set*/
        }
    }
    return 0;/*the number is not in the set*/
}

/*print the set*/
void print_set(int* arr, int size)
{
    int i = 0;
    printf("The set is: ");
    for(; i < size; i++)
    /*if it's the last number in the set*/
    if (i == size-1)
    {
        printf(" %d \n", arr[i]);
    }
    else
    {
        printf(" %d, ", arr[i]);
    }
}
