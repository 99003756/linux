#include "mystring.h"
#include "bitmask.h"
#include "myutils.h"

int main()
{
    char s1[20]="Check-string";
    char s2[20];
    char s3[20]="Check-string";
    int n=5,k=1;
    int m = 121;
    
    int o;
    int a = 5;
    printf(" String length = %d\n",mystrlen(s1));
    printf("String s1 : %s  String s2 = %s\n",s1,mystrcpy(s1,s2));
    printf("string s2 = %s, string s2 = %s\n",s2,mystrcat(s1,s2));
    printf("0->equal 1->not equal\n");
    printf("Checking.... %d\n",mystrcmp(s1,s3));
    printf("Factorial of %d = %d\n",n,factorial(n));
    printf("0->Not prime 1-> Prime\n");
    printf("%d\n",isPrime(n));
    printf("0->Palindrome 1-> Not palindrome\n");
    printf("%d\n",ispalindrome(m));
    printf(" Vsum of 2 numbers = %lf\n",vsum(2,10,20));
    printf("Set %d = %d",a,set(a,k));
    printf("Reset %d = %d",a,reset(a,k));
    printf("Flip of %d = %d",a,flip(a,o));
}