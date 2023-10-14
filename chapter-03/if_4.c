#include <stdio.h>

int main(void)
{
    int a;
    a=10;

    if(a+a)
        printf("NAI\n");
    else
        printf("OXI\n");

    if(a-a)
        printf("NAI");
    else
        printf("OXI");

    return 0;
}
