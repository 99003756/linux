#include "myutils.h"

double vsum(int a,...)
{
    va_list valist;
    double sum = 0;
    va_start(valist,a);
    for(int i=0;i<a;i++)
    {
        sum += va_arg(valist,int);
    }
    va_end(valist);
    return sum;
}