#include "mystring.h"

int mystrlen(char *s1)
{
  int len = 0;
  int i=0;
  while(s1[i]!='\0')
  {i++;
   len++;
  }
   return len;
}




