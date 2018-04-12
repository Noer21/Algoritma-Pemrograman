#include<stdio.h>
int main()
{
    int usia;
    scanf("%d", &usia);
    if(usia<16)
        printf("Too young to drive\n");

    if(usia==16)
        printf("Better clear the road\n");

    if(usia>16)
        printf("You are getting pretty old\n");

    return 0;
}
