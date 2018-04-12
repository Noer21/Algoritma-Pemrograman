#include <stdio.h>

int main(){
    long long int a, b;
    double c;

    scanf("%lld %lld %lf", &a, &b, &c);
    printf("%.2f\n", (a*1.0/b)+c);

    return 0;

}

