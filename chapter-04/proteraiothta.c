#include <stdio.h>

int main(void)
{
    int x;

    x=10/2*5;

    printf("%d\n",x);

    x=10/(2*5);

    printf("%d\n",x);

    int b=5,c=30;

    x=b>c;

    printf("%d\n",x);

    x=b==c;

    printf("%d\n",x);

    x=!10>-5;

    printf("%d\n",x);

    return 0;
}
