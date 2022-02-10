#include <stdlib.h>
#include <stdio.h>

#include "palindrome.h"

/**
 * is_palindrome - Entry point
 *
 * @n: unsigned long integer to evaluate
 *
 * Return: if is a palindrome or not
 */
int is_palindrome(unsigned long n)
{
    unsigned long r,sum=0,temp;  
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }
    if(temp==sum)    
        return 1;  
    else
        return 0;  
}
