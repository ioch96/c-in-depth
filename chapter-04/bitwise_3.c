#include <stdio.h>

int main(void)
{
    int a,b,c;

    a=166<<2;
    b=166>>2;
    c=~166;

    printf("a=%d b=%d c=%d",a,b,c);

    return 0;
}
