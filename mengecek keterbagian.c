#include<stdio.h>

int main(){
    int i, n;
    unsigned long long int a;

    scanf("%d", &n);
    for(i =0; i<n; i++){
        scanf("%llu", &a);
        if(a%3==0)
            printf("HABIS DIBAGI\n");
        else
            printf("TIDAK HABIS DIBAGI\n");
    }
    return 0;
}
