#include <stdio.h>

int power(int base,int i);
int main()
{
    int i;
    for (i=0; i<10; i++)
        printf("%d,%d,%d\n",i,power(2,i),power(-3,i));
    return 0;
}

int power(int base,int i)
{
    int p;
    p = 1;
    while (i>0) {
        p = p * base;
        i--;
    }
    return p;
}