#include <stdio.h>
 
 
int main() 
{
    
    int t, sum, rem,n;
    
    for(n = 100; n < 999; n++)
    {
        t = n;
        sum = 0;
        while(t != 0)
        {
            rem = t % 10;     // get the last digit
            sum += rem * rem * rem;  // cube the remainder and add it to the sum
            t = t / 10;    // remove the last digit
        }
        
        if(n == sum)
        {
            printf("%d is an Armstrong number\n", n);
        }
    }
 
    return 0;
}
