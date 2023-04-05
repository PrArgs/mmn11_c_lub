#include "count_bits.h"

/* 
count_bits: 
return number of on bits in an even location in an unsigned long
 */

int count_bits(unsigned long value)
{
    unsigned long mask = 1;
    int count = 0;

    //loop over all even locations bits until we left shift the mask to 0    
    while (mask)
    {
        //if bit is on the result is not 0 hance it is true and we need to add 1 to count
       if(value&mask)
        {
            count++;
        }
        mask = mask << 2;
    }
    return count;
    

    
}
