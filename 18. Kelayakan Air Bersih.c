#include <stdio.h>

int main(){

float batasbesi, batasbakteri, besi, bakteri;

scanf("%f %f %f %f", &batasbesi, &batasbakteri, &besi, &bakteri);

if(batasbakteri>bakteri && batasbesi > besi)
    printf("LAYAK\n");
else
    printf("TIDAK LAYAK\n");

return 0;
}
