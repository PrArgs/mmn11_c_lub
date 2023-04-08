#include "count_bits.h"

#define BITARRY 33


int main()
{

	unsigned long num =1;
	while(1)
	{
		printf("\n please enter a number in decimal or -1 to exit: \n ");
		scanf("%d", &num);
		if(num == -1)
		        {
		            return num;
		        }
		/*print the number in binary*/
        to_binary(num);
		printf(" has: %d even on bits in it\n", count_bits(num));


	}
	return 0;
}
/*

count_bits:
return number of on bits in an even location in an unsigned long
 */
int count_bits(unsigned long value)
{
    unsigned long mask = 1;
    int count = 0;

    /*
	loop over all even locations bits until we left shift the mask to 0
	*/    
    while (mask)
    {
        /*
	if bit is on the result is not 0 hence it is true and we need to add 1 to count
	*/
       if(value&mask)
        {
            count++;
        }
        mask = mask << 2;
    }
    return count;
}

/*
 print a string representation of the 32 bit binary value of an unsigned long
 without using heap memory
 */
void to_binary(unsigned long value)
{
    unsigned long mask = 1;
    char bitarry[BITARRY];
    int i = BITARRY -2;
    /*
    loop over all 32 bits in the value
    and enter the in reverse order to the array
    */
    while (mask)
    {
        if(value&mask)
        {
            bitarry[i] = '1';
        }
        else
        {
            bitarry[i] = '0';
        }
        mask = mask << 1;
        i--;
    }
    bitarry[32] = '\0';
    printf("%s",bitarry);

    
}

