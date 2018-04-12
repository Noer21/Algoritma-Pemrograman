#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x>y)
    {
        if (y>z) printf("%d %d", x, z);
        else if (z>x && z>y) printf("%d %d", z, y);
        else printf("%d %d", x, y);
    }
    else
    {
        if (x>z) printf("%d %d", y, z);
        else if (z>x && z>y) printf("%d %d", z, x);
        else printf("%d %d", y, x);
    }
    return 0;
}
