#include <stdio.h>

int main(void)
{
    int ar,or_pos,kat_pos,pliktra;

    printf("Dwse ton arhthmo apo th syskeuh pontiki: ");
    scanf("%d",&ar);

    // Ypologismos ths katakorufhs theshs
    kat_pos=ar&255;

    // Ypologismos ths orizontias theshs
    or_pos=(ar&65280)>>8;

    // Ypologismos ths katastashs twn plhktrwn
    pliktra=(ar&196608)>>16;

    // Emfanhsh ths theshs tou ixnous tou pontikiou
    printf("Katakoryfh thesh: %d\n",kat_pos);
    printf("Orizontia thesh: %d\n",or_pos);

    // Emfanhsh ths katastashs twn plhktrwn
    if(pliktra==0)
        printf("Kanena pathmeno pliktro\n");
    if(pliktra==1)
        printf("Pathmeno to deksi pliktro\n");
    if(pliktra==2)
        printf("Pathmeno to aristero pliktro\n");
    if(pliktra==3)
        printf("Pathmena kai ta dyo pliktra\n");

    return 0;
}
