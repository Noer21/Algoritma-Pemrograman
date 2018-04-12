#include <stdio.h>

int main(){
    int mobil, jam, menit, temp;
    float jarak, waktu;

    scanf("%d %f %d:%d", &mobil, &jarak, &jam, &menit);

    if(mobil==1){
        waktu = jarak*60/23;
        jam = jam + waktu/60;
        if(waktu-(int)waktu==0)
            menit = menit + (int)waktu%60;
        else
            menit = menit + (int)waktu%60 + 1;
        if(menit%60 > 1){
            jam += menit/60;
            menit = menit%60;
        }
        if (jam > 24){
            jam -= 24;
        }
        printf("%d:%d\n", jam, menit);
    return 0;
    }

    if(mobil==2){
        if (jarak > 6){
            waktu = 6*60/35 + (jarak - 6)*60/25;
        }
        else{
            waktu = jarak*60/23;
        }
        jam = jam + waktu/60;
        if(waktu-(int)waktu==0)
            menit = menit + (int)waktu%60;
        else
            menit = menit + (int)waktu%60 + 1;
        if(menit%60 > 1){
            jam += menit/60;
            menit = menit%60;
        }
        if (jam > 24){
            jam -= 24;
        }
        printf("%d:%d\n", jam, menit);
    return 0;
    }

    if(mobil==3){
        if (jarak > 10){
            waktu = 6*60/24 + 4*60/33 + (jarak - 10)*60/30;
        }
        else if (jarak > 6){
            waktu = 6*60/24 + (jarak - 6)*60/33;
        }
        else{
            waktu = jarak*60/24;
        }
        jam = jam + waktu/60;
        if(waktu-(int)waktu==0)
            menit = menit + (int)waktu%60;
        else
            menit = menit + (int)waktu%60 + 1;
        if(menit%60 > 1){
            jam += menit/60;
            menit = menit%60;
        }
        if (jam > 24){
            jam -= 24;
        }
        printf("%d:%d\n", jam, menit);
    return 0;
    }

    return 0;
}
