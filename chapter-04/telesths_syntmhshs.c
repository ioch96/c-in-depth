#include <stdio.h>

int main(void)
{
    int a,b,c,d,e;

    a=b=c=d=e=20;

    a=a+=5;
    b=b-=5;
    c=c*=5;
    d=d/=5;
    e=e%=5;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);

    return 0;
}
