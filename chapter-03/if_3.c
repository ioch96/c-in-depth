#include <stdio.h>

int main(void)
{
    int x=6;

    if(x>5)
    {
        printf("To x einai megalytero tou 5");
        x=x/2;
    }
    else
    {
        printf("To x einai mikrotero h iso tou 5");
        x=x*2; 
    }

    return 0;
}
