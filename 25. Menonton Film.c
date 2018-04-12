#include <stdio.h>

int main()
{
    short age, parent;
    float money;
    scanf("%hd %hd %f", &age, &parent, &money);
    if (money<7.50) printf("Insufficient fund\n");
    else {  if (age<13) printf((parent==0)?"Rate    : G\n":"Rate    : G, PG\n");
            else if (age>=13 && age<16) printf((parent==0)?"Rate    : G, PG\n":"Rate    : G, PG, R\n");
            else printf("Rate    : G, PG, R\n");

            if (money>=7.50 && money>=10.50) printf("Schedule: Matinee, Evening\n");
            else printf("Schedule: Matinee\n");
    }
    return 0;
}
