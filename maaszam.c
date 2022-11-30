#include<stdio.h>
//zam miktarı verilen maasın güncel halini bulan fonksiyon
float fonk26(int maas,int zam)
{
    float yenimaas;
    yenimaas=maas+(maas*zam)/100;
    return yenimaas;
}
int main()
{
    int maas,zam;
    printf("maas bilginizi giriniz:");
    scanf("%d",&maas);
    printf("zam miktarini giriniz:");
    scanf("%d",&zam);

    float zamlimaas=fonk26(maas,zam);

    printf("guncel maasiniz:%.2f",zamlimaas);

    return 0;
}