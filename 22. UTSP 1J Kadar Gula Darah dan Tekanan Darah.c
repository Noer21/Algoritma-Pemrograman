#include<stdio.h>
int main()
{
    int darah, gula;
    scanf("%d %d", &gula, &darah);
    if(gula>=70 && gula<=110)
        printf("KADAR GULA NORMAL %d\n", abs(gula-110));
    else
        printf("KADAR GULA TIDAK NORMAL %d\n", abs(gula-110));

    if(darah>=100 && darah<=140)
        printf("TEKANAN DARAH NORMAL %d\n", abs(darah-140));
    else
        printf("TEKANAN DARAH TIDAK NORMAL %d\n", abs(darah-140));

    return 0;

}
