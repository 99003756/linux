#include "mystring.h"

int mystrcmp(char *s1,char *s3)
{
    int i=0;int j=0;
    while(s1[i]!='\0' && s3[i]!='\0')
    {
        if(s1[i]!=s3[i])
        {
            j=1;
            break;
        }
        i++;
    }
 if(j== 0)
 return 0;
 else
 return 1;
}