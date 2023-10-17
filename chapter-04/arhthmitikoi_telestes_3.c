#include <stdio.h>

int main(void)
{
    int a,b,c,d;

    a=b=5;
    c=--b;
    d=a--;

    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);

    return 0;
}
