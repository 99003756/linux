#include "myutils.h"

int ispalindrome(int m)
{
    int temp,rem,rev=0;
    temp = m;
    while(m!=0)
    {
        rem = m%10;
        rev = rev*10 + rem;
        m = m/10;
    }
    if(rev == temp)
    return 0;
    else
    return 1;
}