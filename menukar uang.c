#include <stdio.h>

int main(){
    long int a, seratus, limapuluh, sepuluh, lima, dua;

    scanf("%ld", &a);

    seratus = a/100000;
    a%=100000;
    limapuluh=a/50000;
    a%=50000;
    sepuluh=a/10000;
    a%=10000;
    lima=a/5000;
    a%=5000;
    dua=a/2000;
    a%=2000;

    printf("%d %d %d %d %d %d\n", seratus, limapuluh, sepuluh, lima, dua, a);

    return 0;

}
