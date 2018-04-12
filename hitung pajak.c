#include <stdio.h>

int main(){
    int a, b, c;
    float harA, harB, harC, pajak, total;

    scanf("%d %f %d %f %d %f %f", &a, &harA, &b, &harB, &c, &harC, &pajak);

    pajak = (a*harA + b*harB + c*harC)*pajak/100;
    total = (a*harA + b*harB + c*harC)-pajak;

    printf("%.2f %.2f\n", pajak, total);

    return 0;

}
