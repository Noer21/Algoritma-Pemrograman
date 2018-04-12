#include<stdio.h>

int main(){
    int level, nbuku, pinjam, balik, selisih, denda;
    float diskon;

    scanf("%d %d %d %d", &level, &nbuku, &pinjam, &balik);
    pinjam += 5;
    selisih = balik - pinjam;


    if(level==3){
        if(selisih<7)
            denda = nbuku*4*selisih;
        else if (selisih >= 14)
            denda = nbuku*7*selisih;
        else
            denda = nbuku*6*selisih;
        if(!(balik%3))
            denda = denda * 0.8;
        printf("%d\n", denda);
        return 0;
    }

    else if(level==2){
        if(selisih<7)
            denda = nbuku*3*selisih;
        else
            denda = nbuku*5*selisih;
        if(!(balik%3))
            denda = denda * 0.8;
        printf("%d\n", denda);
        return 0;
    }

    else {
        denda = nbuku*2*selisih;
        if(!(balik%3))
            denda = denda * 0.8;
        printf("%d\n", denda);
        return 0;
    }

    return 0;
}
