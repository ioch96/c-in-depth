#include <stdio.h>

int main(void)
{
    {
        int a=4;
        {
            int m=8;
            printf("Test 1\n");
        }
        printf("Test 2");
    }

    return 0;
}
