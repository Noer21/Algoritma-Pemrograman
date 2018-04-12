#include<stdio.h>

int main(){
    int jenis, masuk, keluar, biaya, selisih;

    scanf("%d %d %d", &jenis, &masuk, &keluar);
    selisih = keluar - masuk;

    if(jenis==1){
        if(selisih<=1)
            biaya = 5000;
        else if (selisih >= 14)
            biaya = 5000 + 13*3000;
        else
            biaya = 5000 + (selisih - 1)*3000;
        printf("%d\n", biaya);
        return 0;
    }

    if(jenis==2){
        if(selisih<=1)
            biaya = 3000;
        else if (selisih >= 14)
            biaya = 3000 + 13*1500;
        else
            biaya = 3000 + (selisih - 1)*1500;
        printf("%d\n", biaya);
        return 0;
    }

    if(jenis==3){
        if(selisih<=1)
            biaya = 2000;
        else if (selisih >= 14)
            biaya = 2000 + 13*1000;
        else
            biaya = 2000 + (selisih - 1)*1000;
        printf("%d\n", biaya);
        return 0;
    }

    return 0;
}
