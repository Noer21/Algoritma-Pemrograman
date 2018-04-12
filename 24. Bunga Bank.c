#include <stdio.h>
int main()
{
    int tipe,jenis,saldo;
    scanf("%d %d %d", &tipe, &jenis, &saldo);
    if ((tipe==0)&&(jenis==0)&&(saldo>=0)) printf("1.2%%\n");
    else if((tipe==0)&&(jenis==1)&&(saldo>=1000)&&(saldo<5000)) printf("1.9%%\n");
    else if((tipe==0)&&(jenis==1)&&(saldo>=5000)) printf("2.3%%\n");
    else if((tipe==1)&&(jenis==0)&&(saldo>=1500)) printf("1.7%%\n");
    else if((tipe==1)&&(jenis==2)&&(saldo>=10000)) printf("2.5%%\n");
    else printf("1.2%%\n");
    return 0;
}
