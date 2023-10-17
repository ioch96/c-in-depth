#include <stdio.h>

int main(void)
{
    int a,b;

    b=a=5;

    printf("++a=%d\n",++a);
    printf("b++=%d\n",b++);
    printf("a=%d b=%d\n",a,b);

    return 0;
}
