#include <stdio.h>

int main(void)
{
    int a,b;

    b=a=5;

    ++a;
    --b;

    printf("a=%d b=%d\n",a,b);

    return 0;
}
