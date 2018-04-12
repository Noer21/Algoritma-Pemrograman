#include<stdio.h>

int main(){
    int i, awal, akhir, sum, cout;
    float avg;

    sum = 0;
    cout= 0;
    scanf("%d %d", &awal, &akhir);
    for(i=awal; i<=akhir; i++){
        if(i%2==0){
            sum += i;
            cout++;
        }
    }
    avg = sum/cout;
    printf("%.0f\n", avg);

    return 0;
}
